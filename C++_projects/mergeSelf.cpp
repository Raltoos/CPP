#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> merged;

    int i = start, j = mid + 1;

    // for(int i = start; i <= mid; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i = mid+1; i < end; i++){
    //     cout<<arr[i]<<" ";
    // }

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            merged.push_back(arr[i++]);
        } else {
            merged.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        merged.push_back(arr[i++]);
    }
    while (j <= end) {
        merged.push_back(arr[j++]);
    }

    for (int k = start; k <= end; k++) {
        arr[k] = merged[k - start];
    }

    for(int i = start; i <= mid; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = mid+1; i < end; i++){
        cout<<arr[i]<<" ";
    }

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


void mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start,mid,end);
    }
}

int main(){

    vector<int> arr = {1,23,5,32,4,21,3};
    mergeSort(arr, 0, arr.size()-1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}