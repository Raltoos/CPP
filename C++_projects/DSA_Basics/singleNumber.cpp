#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {4,1,2,1,2};
    // sort(arr.begin(), arr.end());

    // int prev = arr[0];
    // for(int i = 1; i < arr.size(); i+=2){
    //     if(arr[i] == prev){
    //         prev = arr[i+1];
    //         if(i+1 == arr.size()-1) break;
    //     }else{
    //         break;
    //     }
    // }
    // cout<<prev<<endl;

    // for(int i = 1; i < arr.size(); i+=2){
    //     if(arr[i] != arr[i-1]){
    //         cout<<arr[i-1]<<endl;
    //     }
    // }

    int sol = arr[0];
    for(int i = 1; i < arr.size(); i++){
        sol = arr[i] ^ sol;
    }
    cout<<sol<<endl;

    return 0;
}