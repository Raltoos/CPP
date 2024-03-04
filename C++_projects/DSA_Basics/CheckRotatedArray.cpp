#include <iostream>
using namespace std;

// bool checkSort(int arr[], int n){
//     int prev = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i]<prev) return false;
//         prev = arr[i];
//     }
//     return true;
// }

// bool checkRotation(int arr[], int n){
//     int brr[4];
//     for(int j = 0; j < n; j++){
//         for(int i = 0; i < n; i++){
//             brr[i] = arr[(i + j) % n];
//         }
//         if(checkSort(brr, n)) return true;
//     }
//     return false;
// }

//BEAUTY
bool checkSort(int arr[], int n){
    for(int i = 0, k = 0; i < n; i++) if(arr[i] > arr[(i+1)%n] && ++k>1) return false;
    return true;
}

int main(){
    int arr[] = {3,4,1,2};
    int n = 4;
    cout<<checkSort(arr, n)<<endl;

    return 0;
}