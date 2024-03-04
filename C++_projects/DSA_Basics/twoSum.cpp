#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int n = arr.size();
    int target = 17;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[j] == target - arr[i])
            {
                // FOUND THE PAIR
            }
        }
    }

    unordered_map<int, int> sumTable;

    for (int i = 0; i < n; i++)
    {
        if (sumTable.find(arr[i]) != sumTable.end())
            cout<<sumTable[arr[i]]<<" "<<i<<endl;
    
        sumTable.insert({target - arr[i], i});
    }

    unordered_map<int, int> sumTable;

    for (int i = 0; i < n; i++)
    {
        if (sumTable.find(arr[i]) != sumTable.end())
            return "YES";
    
        sumTable.insert({target - arr[i], i});
    }
    return "NO";

    //Two pointer approach -- if sorted, we can sort it to get yes or no but if we want the indexes we have to use pairs wherein we have the value and the index

    // int left = 0, right = arr.size() - 1;
    // while(arr[left] + arr[right] != target){
    //     int sum = arr[left] + arr[right];

    //     if(sum < target) left++;
    //     else right--;
    // }
    // cout<<left<<" "<<right;

    return 0;
}