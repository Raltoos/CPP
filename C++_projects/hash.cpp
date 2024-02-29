#include <iostream>
using namespace std;

void hashing(int* hash_table, int h_size, int* arr, int n){
    
    for(int i = 0; i < n; i++){
        int index = arr[i] % h_size;

        if(hash_table[index] == -1){
            hash_table[index] = arr[i];
        }else{
            for(int j = 0; j < h_size; j++){
                    int new_index = (index + j * j) % h_size;
                    if(hash_table[new_index] == -1){
                        hash_table[new_index] = arr[i];
                        break;
                    }
            }
        }
    }
}

int main(){
    int arr[] = {50, 700, 76, 85, 92, 73, 101};
    int size = 7;

    int hash_table[7];

    for(int i = 0; i < size; i++){
        hash_table[i] = -1;
    } 

    hashing(hash_table, size, arr, size);

    for(int i = 0; i < size; i++){
        cout<<hash_table[i]<<endl;
    }

    return 0;
}