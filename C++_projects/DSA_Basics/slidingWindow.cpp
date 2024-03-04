#include <iostream>
#include <set>
using namespace std;

int main(){
    //Given an array, return true if there are two number withtin a window of size k that are equal

    int arr[] = {1,2,3,2,3,3};
    int n = 6;
    int k = 2;

    //BRUTE
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n && j < i + k; j++){
            if(arr[i] == arr[j]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    //HASHING : sliding window
    set<int> window;

    int i = 0;
    for(int j = 0; j < n; j++){
        if (j - i + 1 > k){
            window.erase(arr[i++]);
        }
        if (window.find(arr[j]) != window.end()){
            cout<<"TRUE"<<endl;
            break;
        }

        window.insert(arr[j]);
    }

    return 0;
}