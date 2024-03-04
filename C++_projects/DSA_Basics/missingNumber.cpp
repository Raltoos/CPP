#include <iostream>
using namespace std;

int missing(int arr[], int n){
    int sum = (n*(n+1))/2;
    for(int i = 0; i < n; i++) sum -= arr[i];

    return sum;
}

int main(){
    //program to find the missing number in an array from 0 to n

    int arr[] = {1,2,4,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int missingNumber = missing(arr, n);
    cout<<missingNumber<<endl;

    return 0;
}