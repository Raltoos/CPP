#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n){
    int maxSum = arr[0];
    int curSum = 0;

    for(int i = 0; i < n; i++){
        (curSum < 0) ? curSum = arr[i] : curSum += arr[i];
        maxSum = max(curSum, maxSum);
    }

    return maxSum;
}

int main(){
    int arr[] = {1,2,3,2,-12,6,7,3,12,-10,21};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubArraySum(arr, len)<<endl;

    return 0;
}