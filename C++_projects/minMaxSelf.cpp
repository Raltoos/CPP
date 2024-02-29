#include <iostream>
#include <limits.h>
using namespace std;

pair<int, int> minMaxFinder(int* arr, int low, int high){
    pair<int, int> minMax, mml, mmr;

    if( low == high ){
        minMax.first = minMax.second = arr[low];
        return minMax;
    }else if( low == high - 1 ){
        if(arr[low] > arr[high]){
            minMax.first = arr[high];
            minMax.second = arr[low];
        }else{
            minMax.first = arr[low];
            minMax.second = arr[high];
        }
        return minMax;
    }else{
        int mid = (low + high) / 2;
        mml = minMaxFinder(arr, low, mid);
        mmr = minMaxFinder(arr, mid+1, high);

        if(mml.first > mmr.first){
            minMax.first = mmr.first;
        }else{
            minMax.first = mml.first;
        }

        if(mml.second > mmr.second){
            minMax.second = mml.second;
        }else{
            minMax.second = mmr.second;
        }

        return minMax;
    }
}

int main(){

    int arr[] = {4,23,1,5,3,13,53,12,21};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX, max = INT_MIN;
    pair<int, int> ans = minMaxFinder(arr, 0, size - 1);

    cout<<"Minimum element : "<<ans.first<<endl;
    cout<<"Maximum element : "<<ans.second<<endl;

    return 0;
}