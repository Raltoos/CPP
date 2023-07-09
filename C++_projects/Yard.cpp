#include <bits/stdc++.h>
using namespace std;

void I_S(int *arr, int size){

    for(int i = 0; i < size; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
            j--;
        }

        arr[j+1] = temp;
    }

}

int main(){

    int arr[] = {5,2,1,7,3,6,4,8,10,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    I_S(arr,size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}