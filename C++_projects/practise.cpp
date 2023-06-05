#include <iostream>
using namespace std;

int main(){
    string s;

    getline(cin,s);
    cout<<s.length()<<endl;
    s.insert(2,"@#");
    cout<<s<<endl;
    cout<<s.length()<<endl;
}