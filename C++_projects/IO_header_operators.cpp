#include<iostream>
using namespace std;

int main()
{
    //input and output 
    //streams in cpp - sequence of bytes

    int num1,num2;
    cout<<"Enter the value of num1 = ";// << is insertion operator
    cin>>num1; // >> is extraction operator 

    cout<<"Enter the value of num2 = ";
    cin >> num2;

    cout<<"Their sum = "<<num1+num2 << endl;// also a way of adding a line break

    // There are two types of header _find
    // system header files - come with the compiler
    // user defined - written by programmer #include "this.h"

    //OPERTORS IN C++
    //arithmatic ops - +,-,*,/
    //incremet - a++,a--
    int a = 10, b =7;
    cout<<"a + b = "<<a+b<<endl; 
    cout<<"a - b = "<<a-b<<endl; 
    cout<<"a * b = "<<a*b<<endl; 
    cout<<"a / b = "<<a/b<<endl; 
    //comparison - >,<,>=,<=,!=,==
    //logical - and,or,!
    //bitwise


    return 0;
}
