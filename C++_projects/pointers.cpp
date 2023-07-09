#include <iostream>
using namespace std;

int main(){

    int rows = 0;
    
    cin>>rows;

    int **arr = new int*[rows];

    int no_of_col[rows] = {0};
    for (int i = 0; i < rows; i++){
        int col;
        cout<<"Enter the number of colms for this row: ";
        cin>>col;

        no_of_col[i] = col;
        arr[i] = new int[col];
        for(int j = 0; j < col; j++){
            int element;
            cin>>element;
            arr[i][j] = element;
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < no_of_col[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}