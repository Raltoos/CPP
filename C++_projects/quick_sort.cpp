#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] < pivot) count++;
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if( s >= e) return;

    int ptr = partition(arr, s, e);
    quickSort(arr, s, ptr - 1);
    quickSort(arr, ptr + 1, e);
}

int main(){

    int arr[] = {3,1,5,2,9,7};
    int size = sizeof(arr)/sizeof(int);

    quickSort(arr, 0, size - 1);

    for(auto i : arr){
        cout << i << " ";
    }

    return 0;
}