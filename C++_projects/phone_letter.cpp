#include <iostream>
#include <vector>
using namespace std;

void Comb(vector<string> &ans, string output, string digits,string mapping[], int index){

    if(index >= digits.length()){
        ans.push_back(output);
        return ;
    } 

    int digit = digits[index] - '0';
    string map = mapping[digit];

    for(int i = 0; i<map.length(); i++){
        output.push_back(map[i]);
        Comb(ans,output,digits,mapping,index+1);
        output.pop_back();
    }

}

int main(){

    vector<string> ans;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string digits;
    cin >> digits;

    if(digits.length() == 0) cout<<-1<<endl;
    
    int index = 0;
    Comb(ans,output,digits,mapping,index);


    return 0;
}