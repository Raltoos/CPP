#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int arr[10] = {1,2,3,4,52,2,3,12,9,10};

int main()
{   
    //To find the second largest element from the array 
    // int max = arr[0];
    // for(int i = 1; i < 10; i++){
    //     if(arr[i] > max)  max = arr[i];
    // }
    // int secondLargest = INT_MIN;
    // for(int i = 0; i < 10; i++){
    //     if(arr[i] > secondLargest && arr[i] < max) secondLargest = arr[i];
    // }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i = 0; i < 10; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if (arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }   
    }

    cout << "The second largest element of the array is : " << secondLargest << endl;

    return 0;
}