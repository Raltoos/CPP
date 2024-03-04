#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    int n = arr1.size();
    vector<int> arr2 = {2, 2, 3, 3};
    int m = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> temp;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {   
            temp.push_back(arr1[i]);
            while (i < n - 1 && arr1[i] == arr1[i + 1])
                i++;
            // Skip duplicates in arr2
            while (j < m - 1 && arr2[j] == arr2[j + 1])
                j++;
            i++;
            j++;
        }
    }

    for (int i : temp)
        cout << i << " ";
    cout << endl;

    return 0;
}