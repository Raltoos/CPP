#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){ 
    vector<int> arr = {3,-3,1,1,1};
    int n = arr.size();

    int k = 3;

    map<int, int> hashMap;
    hashMap[0] = 1;

    int prefixSum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        // cout<<"i :"<<i<<endl;
        prefixSum += arr[i];
        // cout<<"prefixSum : "<<prefixSum<<endl;
        int rem = prefixSum - k;
        // cout<<"rem : "<<rem<<endl;
        // cout<<"hashMap[rem] : "<<hashMap[rem]<<endl;
        count += hashMap[rem];
        // cout<<"count : "<<count<<endl;
        hashMap[prefixSum] += 1;
        // cout<<"hashMap[prefixSum] : "<<hashMap[prefixSum]<<endl;
        // cout<<"---------------------------------"<<endl;
    }

    cout << count << endl;

    return 0;
}