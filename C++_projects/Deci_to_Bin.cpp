#include <iostream>
using namespace std;

int power(int a, int b){
    if (b==0)
        return 1;
    return a*power(a , b-1);
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i = 0;
    int answer = 0;
    while(n!=0){
        int digit = n&1;
        answer = (digit*power(10,i)) + answer;

        i++;
        n = n>>1;    
    }

    cout<<"The binary conversion of the number entered is : "<<answer;
}