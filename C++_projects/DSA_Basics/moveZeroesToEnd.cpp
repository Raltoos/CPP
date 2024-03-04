#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 0, 0, 2, 3};
    int n = 6;

    int j;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    int i = j++;
    while(j<n){
        if(arr[j] != 0) swap(arr[i++],arr[j]);
        j++;
    }

    for(int i : arr) cout << i << " ";

    return 0;
}