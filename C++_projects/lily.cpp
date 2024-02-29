#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int lilysHomework(vector<int> arr) {
    
    vector<pair<int,int>> pair_asc;
    vector<pair<int,int>> pair_desc;
    
    for (long i=0; i<arr.size(); i++)
        pair_asc.push_back({arr[i],i});
            
    for (long i=0; i<arr.size(); i++)
        pair_desc.push_back({arr[i],i});
        
    sort(pair_asc.begin(),pair_asc.end());
    
    sort(pair_desc.rbegin(),pair_desc.rend());
    
    int count_asc = 0; int count_desc = 0; 
     
    for (long i = 0; i < pair_asc.size(); ++i){
        
        while(i!=pair_asc[i].second){
            std::swap(pair_asc[i],pair_asc[pair_asc[i].second]);
            ++count_asc;
        }
    }
    
    for (long i = 0; i < pair_desc.size(); ++i){
        
        while(i != pair_desc[i].second){
            std::swap(pair_desc[i],pair_desc[pair_desc[i].second]);
            ++count_desc;
        }    
    }
    
    
    if (count_asc < count_desc)
        return count_asc;
    else 
        return count_desc;
 
}


int main(){

    vector<int> input = {3,7,15,12};
    lilysHomework(input);

    return 0;
}