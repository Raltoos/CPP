#include <iostream>
#include <vector>
using namespace std;

void printSum(int ind, int arr[], vector<int> subseq, int size, int sum, int curSum){
    
    if(ind == size || curSum > sum){
        if(curSum == sum){
            for(auto i: subseq){
                cout<<i<<" ";
            }
            cout<<endl; 
        }
        return;
    }

    printSum(ind+1, arr, subseq, size, sum, curSum);

    subseq.push_back(arr[ind]);
    printSum(ind+1, arr, subseq, size, sum, curSum + arr[ind]);

}   

int main(){

    int arr[] = {2,3,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> subseq;
    printSum(0, arr, subseq, size, 7, 0);

    return 0;
}