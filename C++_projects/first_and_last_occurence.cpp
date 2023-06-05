#include <iostream>
#include <vector>
using namespace std;

int left_occurence(vector<int> arr, int key){
    int size = arr.size();
    int s = 0, e = size - 1;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key){
            e = mid-1;
        }
        else if (arr[mid] < key){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int right_occurence(vector<int> arr, int key){
    int size = arr.size();
    int s = 0, e = size - 1;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key){
            e = mid-1;
        }
        else if (arr[mid] < key){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){

    vector<int> arr{1,2,3,3,3,3,3,6,7,13,15};

    int key = 3;

    int left = left_occurence(arr, key);
    int right = right_occurence(arr,key);
    cout<<"Left index : "<<left<<endl;
    cout<<"Right index : "<<right<<endl;

    return 0;
}