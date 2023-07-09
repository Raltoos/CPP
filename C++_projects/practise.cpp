#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    cin>>n;
    
    set<int> s;
    
    for(int i = 0; i < n; i++){
        int choice,element;
        cin>>choice>>element;
        
        if(choice == 1){
            s.insert(element);
        }
        else if (choice == 2){
            int element;
            cin>>element;
            
            s.erase(element);
        }
        else if (choice == 3){
            auto itr = s.find(element);
            
            if(*itr == element){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    
      
    return 0;
}
