#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,7,5,1, 3,12,23,13,20};
    int size = sizeof(arr)/sizeof(int);

    int i = 1;
    while(i < size){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j]>temp)
                arr[j+1] = arr[j];
            else break;

            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<' ';
    }
}   