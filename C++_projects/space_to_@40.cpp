#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    // string temp = "";
    // for(int i = 0; i < s.length(); i++){
    //     if (s[i] == ' '){
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else{
    //         temp.push_back(s[i]);
    //     }
    // }
    // cout<<temp;

    int length = s.length();
    int i = 0;
    while(i < s.length()){
        if (s[i] == ' '){
            s.replace(i,1,"@40");
            i+=3;
            continue;
        }
        i++;
    }
    cout<<s<<endl;
}