#include <iostream>
#include <vector>
using namespace std;

void Subset(vector<int> a, int index, vector<int> output, vector<vector<int>>& ans){
    if(index >= a.size()){
        ans.push_back(output);
        return ;
    }

    Subset(a,index+1,output,ans);

    int element = a[index];
    output.push_back(element);
    Subset(a,index+1,output,ans);
}

int main(){

    vector<int> a = {1,2,3};
    vector<int> output;
    vector<vector<int>> ans;

    Subset(a,0,output,ans);

    for(int i = 0; i < ans.size(); i++){
        cout<<"[";
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"] ";
    }
    cout<<endl;
    
    return 0;
}