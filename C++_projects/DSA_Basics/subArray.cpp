#include <iostream>
#include <map>
using namespace std;

int main(){
    // int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = 1;
    int arr[] = {1};

    int k = 0;
    int len = 0;

    //BRUTE METHOD WITH N^3 COMPLEXITY

    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             // cout<<arr[k]<<" ";
    //             sum += arr[k];
    //         }
    //         if(sum == k) len = max(len, j-i+1);
    //     }
    // }

    //BETTER SOLUTION WITH N^2 COMPLEXITY

    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += arr[j];
    //         if(sum == k){
    //             len = max(len, j-i+1);
    //             break;
    //         }
    //     }
    // }

    //Better SOLUTION
    // map<long long, int> prevSum;

    // long long sum = 0;
    // int maxLen = 0;
    // for(int i = 0; i < n; i++){
    //     sum += arr[i];
    //     if(sum == k){
    //         maxLen = max(maxLen, i+1);
    //     }
    //     long long rem = sum - k;
    //     if(prevSum.find(rem) != prevSum.end()){
    //         int len = i - prevSum[rem];
    //         maxLen = max(maxLen, len);
    //     }
    //     if(prevSum.find(sum) == prevSum.end()) prevSum[sum] = i;
    // }
    // cout<<maxLen<<endl;

    //OPTIMAL SOLUTION -- only positives
    int left = 0; int right = 0;
    long long sum = 0;
    // int maxLen = 0;
    int count = 0;
    while(right < n){
        sum += arr[right];
        while(sum > k && left <= right){
            sum -= arr[left++];
        }
        if(sum == k){
            // maxLen = max(maxLen, right - left + 1);
            count++;
        }
        right++;
    }
    cout << count << endl;
}