#include<iostream>
using namespace std;

int glo = 6; //global variable

void sum(){
    cout<<glo;
}

int main(){
    //variables and datatypes - scope
    int a =10, b =5;
    float pi = 3.14;
    char c = 'c'; 
    bool is_true = true;
    cout <<"The value of a is " <<a<<" and the value of b is " << b;
    cout<<"\nThe value of pi = "<<pi;
    cout<<"\nThe value of c = "<<c;
    cout<<"\nBoolean - is_true = "<<is_true;

    cout<<"\n";
    int glo = 78; //local variable
    glo = 7;
    cout<<glo;

    cout<<"\n";
    sum();

    return 0;
}