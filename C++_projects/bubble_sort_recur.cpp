#include <iostream>
using namespace std;

void bubble(int arr[], int size, int i = 0){
    if (size <= 1) return ;

    // for(int i = 0; i < size - 1; i++){
    //     if(arr[i] > arr[i+1]){
    //         swap(arr[i], arr[i+1]);
    //     }
    // }

    if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);

    if(i == size - 1){
        bubble(arr,size-1);
    }
    else{
        bubble(arr,size,++i);
    }
}

int main(){

    int arr[] = {2,6,9,1,3,4,10,5,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubble(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}