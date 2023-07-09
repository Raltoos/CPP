#include <iostream>
using namespace std;

int sumof(int arr[], int size){
    
    if (size == 0) return 0;
    if(size == 1) return *(arr);

    int sum = *(arr) + sumof(arr+1, size - 1);
    return sum;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[1]);

    int ans = sumof(arr, size);

    cout<<ans<<endl;

    return 0;
}