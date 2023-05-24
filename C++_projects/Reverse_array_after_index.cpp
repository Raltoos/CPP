#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse(vector<int> a, int index){
    int s = index + 1, e = a.size()-1;
    while (s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    
    return a;
}

int main(){

    vector<int> a;
    int size;
    cout<<"Enter the length of the array : ";
    cin>>size;

    for(int i = 0; i<size; i++){
        int element;
        cin>>element;
        a.push_back(element);
    }
    int index;
    cout<<"Enter the index : ";
    cin>>index;
    a = reverse(a,index);

    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

}