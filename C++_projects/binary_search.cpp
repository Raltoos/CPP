#include <iostream>
#include <vector>
using namespace std;

//ITERATIVE
void binarySearch(vector<int> arr, int length, int key){
    int start = 0;
    int end = length - 1; 
    while(start <= end){
        int mid = start + ((end - start)/2);
        if(arr[mid] == key){
            cout<<"The element was found at index : "<<mid<<endl;
            return;
        }else if(arr[mid] > key){
            end = mid -  1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }
    }
    cout<<"The element was not found"<<endl;
    return;
}

int main(){

    int length;
    cout<<"Enter the length of the array : ";
    cin>>length;

    cout<<"Enter the elements : "<<endl;
    vector<int> arr;
    int element;
    for(int i = 0; i < length; i++){
        cin>>element;
        arr.push_back(element);
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    binarySearch(arr, length, key);

    return 0;
}