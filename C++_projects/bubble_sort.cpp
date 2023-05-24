#include <iostream>
using namespace std;

void bub_sort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {3,7,52,4,12,34,2,4,236,42,36};
    int size = sizeof(arr)/sizeof(int);

    bub_sort(arr,size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}