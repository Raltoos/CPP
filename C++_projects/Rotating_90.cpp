#include <iostream>
using namespace std;

int main(){

    int rows = 4;
    int cols = 4;
    int matrix[rows][cols] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    for(int i = 0; i < rows; i++){
        for(int j = i+1; j < cols; j++){
            int element = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = element;

        }
    }

    int mid = cols/2;

    // for(int i = 0; i < mid; i++){
    //     for(int j = 0; j < rows; j++){
    //         int element = matrix[j][i];
    //         matrix[j][i] = matrix[j][cols-i-1];
    //         matrix[j][cols-i-1] = element;
    //     }
    // }

    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < mid; j++){
                int element = matrix[j][i];
                matrix[j][i] = matrix[j][cols-i-1];
                matrix[j][cols-i-1] = element;            
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }


    return 0;
}