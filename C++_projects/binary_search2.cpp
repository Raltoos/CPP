#include <iostream>
#include <vector>
using namespace std;

//RECURSIVE
void binarySearch(vector<int> arr, int left, int right, int key){
    int mid = (left + right)/2;

    if(left > right){
        cout<<"Element not found"<<endl; 
        return ;
    }

    if(arr[mid] == key){
        cout<<"Element found"<<endl;
        cout<<"Index: "<<mid<<endl;
        return;
    }else if (arr[mid] > key){
        binarySearch(arr,   left, right-mid, key);
    }else{
        binarySearch(arr, left+mid, right, key);
    }
}

int main(){

    int length;
    cout<<"Enter the length of the array : ";
    cin>>length;

    vector<int> arr;
    for(int i = 0; i < length; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    binarySearch(arr, 0, length-1, key);

    return 0;
}