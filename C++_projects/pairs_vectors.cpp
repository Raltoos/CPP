#include <utility>
#include <iostream>
using namespace std;

int main(){

    pair<int, string> rollCall;

    rollCall = {2, "abc"};

    cout<<rollCall.first<<" "<<rollCall.second<<endl;

    return 0;
}
