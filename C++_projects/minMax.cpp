#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

//RECURSIVE
struct Pair getMinMax(int arr[], int l, int h)
{
    struct Pair minmax, mml, mmr;
    int mid;

    if (l == h)
    {
        minmax.max = arr[l];
        minmax.min = arr[l];
        return minmax;
    }

    if (h == l + 1)
    {
        if (arr[l] > arr[h])
        {
            minmax.max = arr[l];
            minmax.min = arr[h];
        }
        else
        {
            minmax.max = arr[h];
            minmax.min = arr[l];
        }
        return minmax;
    }

    mid = (l + h) / 2;
    mml = getMinMax(arr, l, mid);
    mmr = getMinMax(arr, mid + 1, h);

    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

   
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
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
        cout<<endl;
    } 
    
    struct Pair minmax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max;

    return 0;
}