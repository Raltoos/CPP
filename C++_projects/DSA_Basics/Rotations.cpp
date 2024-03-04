#include <iostream>
using namespace std;

void reverse(int *arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    // left rotation;
    //  int temp = arr[0];
    //  for(int i = 1; i < n; i++){
    //      arr[i-1] = arr[i];
    //  }
    //  arr[n-1] = temp;

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // -----------------------------------------------------------------------------------------------------
    // left rotation by d places
    int d = 33;
    int r = d % n;

    // int temp[r];
    // for(int i = 0; i < r; i++){
    //     temp[i] = arr[i];
    // }

    // for(int i = r; i < n; i++){
    //     arr[i - r] = arr[i];
    // }

    // for(int i = n-r; i < n; i++){
    //     arr[i] = temp[i - (n-r)];
    // }

    // for(int i = 0; i < n; i++) cout << arr[i] << " ";
    // -----------------------------------------------------------------------------------------------------
    reverse(arr, 0, r-1);
    reverse(arr, r, n - 1);
    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}