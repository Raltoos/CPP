#include <iostream>
using namespace std;

int power(int a, int b){
    if (b == 0) return 1;

    return a * power(a,b-1);
}

int main(){
    int n;
    cin>>n;

    if (n==0){
        cout<<1<<endl;
        exit;
    }

    int temp = n; 

    int mask = 0, i = 0;
    while(n!=0){
        mask = (mask<<1)|1;
        //mask = mask + power(2,i);   
        n >>= 1;
        i++;
    }
    
    int final = (~temp)&(mask);
    cout<<final<<endl;
}