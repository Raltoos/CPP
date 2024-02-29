#include <iostream>
using namespace std;

bool binaryS(int arr[], int size, int target){
    int mid = (size-1)/2;

    if(size <= 0){
        cout<<"Blehhh"<<endl; 
        return false;
    }

    if(arr[mid] == target) return true;
    else if (arr[mid] > target){
        binaryS(arr,size-mid,target);
    }
    else if(arr[mid] < target){
        binaryS(arr+mid+1, size-mid, target);
    }

}

int main(){
    int arr[]= {2,4,6,8,10};

    int size = sizeof(arr)/sizeof(arr[0]);

    int target =1;


    if(binaryS(arr,size,target)) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;



    return 0;
}