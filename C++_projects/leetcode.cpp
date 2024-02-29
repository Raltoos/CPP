#include <iostream>
using namespace std;
int main()
{
    int size, arr[100], count = 0, arr2[100], temp = 0;
    bool luffy;
    cout << "Enter Size of Array :-";
    cin >> size;
    cout << "Enter Array :-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count = arr[i];
            }
            for (int l = 0; l < 5; l++)
            {
                arr2[l] = count;
            }
        }
    }
    for (int l = 0; l < size; l++)
    {
        for (int k = l + 1; k < size; k++)
        {
            if (arr2[l] == arr2[k])
            {
                luffy = false;
                break;
            }
            else
            {
                luffy = true;
                break;
            }
            if (luffy)
            {
                cout << "Unique";
                break;
            }
            else
            {
                cout << " Not Unique";
                break;
            }
        }
    }
}