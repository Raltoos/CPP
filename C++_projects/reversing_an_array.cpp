#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void revArr(int arr[], int size){
    for(int i = 0; i < size/2; i++){
        swap(arr[i], arr[size-i-1]);
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[10];

    for(int i = 0; i < 10; i++){
        cin>>arr[i];
    }

    revArr(arr,10);
    printArr(arr,10);
}