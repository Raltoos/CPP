#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;

void randomGen(int* arr, int size){
    for(int i = 0; i < size; i++){

	    int random = rand() % 100;

	    arr[i] = random;
    }
}

void insertion(int* arr, int size){
    int i = 2;
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
}

void selection(int* arr, int size){
    int i = 0;
    for(int i = 0; i <= size - 1; i++){
        int j = i + 1;
        int lowest_index = i;
        while(j < size){
            if(arr[j] < arr[lowest_index]){
                lowest_index = j;
            }
            j++;
        }
        swap(arr[i], arr[lowest_index]);
    }
}

int main(){

    for(int i = 0 ; i < 5; i++){
        int arr[20000];
        int size = sizeof(arr)/sizeof(int);

        randomGen(arr, size);

        auto start1 = chrono::high_resolution_clock::now();
        insertion(arr,size);
        auto end1 = chrono::high_resolution_clock::now();

        auto duration1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();

        cout<<"Insertion sort time "<<i+1<<" "<<duration1<<endl;

        auto start2 = chrono::high_resolution_clock::now();
        selection(arr,size);
        auto end2 = chrono::high_resolution_clock::now();

        auto duration2 = chrono::duration_cast<chrono::nanoseconds>(end2 -  start2).count();

        cout<<"Selection sort time "<<i+1<<" "<<duration2<<endl;
    }
}   