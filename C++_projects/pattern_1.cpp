#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while (i <= n){
        int j = n*(i-1) + 1;
        while (j <= n*i){
            cout<<j<<"   ";
            j++;
        }
        cout<<endl;
        i++;
    }
}