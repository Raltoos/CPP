#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(str[i] == str[j]){
        checkPalindrome(str, i+1, j-1);
        return true;
    }
    return false;
}

int main(){
    string str = "racecar";
    cout<<checkPalindrome(str, 0, str.length()-1)<<endl;

    return 0;
}