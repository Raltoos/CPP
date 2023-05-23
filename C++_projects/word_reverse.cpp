#include <iostream>
using namespace std;

int st = 0, en = 0;

void reverse(string &s, int st, int en){
    int beg = st;
    int end = en;

    while(beg < end){
        swap(s[beg++],s[end--]);
    }

}

int main(){
    string s = "Hello john welcome to mumbai";
    int len = s.length();
    
    for(int i = 0; i < len; i++){
        if (s[i] == ' '){
            en = i-1;
            reverse(s,st,en);
            st = en + 2;
        }
        if (i == len - 1){
            en = i;
            reverse(s,st,en);
        }
    }

    cout<<"Reversed string is : \n"<<s;
    return 0;
}