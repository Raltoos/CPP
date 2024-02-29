#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

//ITERATIVE
struct Pair getMinMax(int arr[], int l, int h)
{
    struct Pair result;
    result.max = arr[0];
    result.min = arr[0];

    for(int i = 1; i <= h; i++){
        if(arr[i] > result.max){
            result.max = arr[i];
        }
        if(arr[i] < result.min){
            result.min = arr[i];
        }
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the values in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    
    struct Pair minmax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max;

    return 0;
}