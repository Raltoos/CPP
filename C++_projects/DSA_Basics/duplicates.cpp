#include <iostream>
using namespace std;

int main(){
    //TWO POINTER APPROACH
    int arr[] = {1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int left = 0;
    // for(int i = 1; i < n; i++){
    //     if(arr[i] != arr[left]){
    //         arr[left++ + 1] = arr[i];
    //     }
    // }

    // cout << (left + 1) << endl;
    // for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";

    int i = 0, j = 1;
    while(i < n && j < n){
        if (arr[j++] == arr[i]) continue;
        else{
            arr[++i] = arr[j++];
        }
    }

    cout << (i+1) << endl;
}