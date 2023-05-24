#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

#include <algorithm>

using namespace std;

int main(){
    // int basic[] = {1,2,3};

    // array<int,4> a = {1,2,3,4};

    // int size = a.size();
    // for(int i = 0; i < size; i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<"Element at 2nd index: "<<a.at(2)<<endl;

    // vector<int> v;// vector<int> a[5,1]; default 0 initialization if not specified
    // //vector<int> last(a);
    // cout<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<v.capacity()<<endl;
    // cout<<'size: '<<v.size()<<endl;
    // cout<<v[0]<<endl;//v.at(1)

    // //v.pop_back() to remove the last element 
    // //v.clear() makes the size 0 not capacity

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
    // //d.pop_back();//d.pop_front()

    // cout<<"First index element : "<<d.at(1)<<endl;
    // d.front();
    // d.back();
    // d.empty();
    // d.erase(d.begin(), d.begin()+1);

    // list<int> l;
    // l.push_back(1);
    // l.push_front(2);

    // l.erase(l.begin())

    // stack<string> s;
    // s.push("love");
    // s.push("babbar");
    // s.push("Kumar");

    // cout<<"Top element : "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element : "<<s.top()<<endl;
    // cout<<"The size of the staack : "<<s.size()<<endl;
    // cout<<"Empty ? : "<<s.empty()<<endl;

    // queue<string> q;
    // q.push("love");
    // q.push("babbar");
    // q.push("kumar");

    // cout<<"First element : "<<q.front()<<endl;
    // q.pop();
    // cout<<"First element : "<<q.front()<<endl;
    // cout<<"Size after pop: "<<q.size()<<endl;

    // //max heap
    // priority_queue<int> maxi;
    // //min heap
    // priority_queue<int, vector<int>, greater<int>> mini;
    
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // cout<<"Size : "<<maxi.size()<<endl;
    // int n = maxi.size();
    // for(int i = 0; i < n; i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;

    // mini.push(5);
    // mini.push(0);
    // mini.push(1);
    // mini.push(4);
    // cout<<"Size : "<<mini.size()<<endl;
    // int m = maxi.size();
    // for(int i = 0; i < n; i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }cout<<endl;

    // set<int> s;

    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(6);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);

    // for(auto i : s){
    //     cout<<i<<endl;
    // }cout<<endl;

    // // set<int>::iterator it = s.begin();
    // // it++;

    // //s.erase(it);

    // for(auto i : s){
    //     cout<<i<<endl;
    // }cout<<endl;

    // cout<<"IS 5 present in the set : "<<s.count(5)<<endl;

    // set<int>::iterator itr = s.find(5);
    // for(auto it = itr; it!=s.end(); it++){
    //     cout<<*it<<" ";
    // }cout<<endl;

    // map<int,string> m;
    // //sorted order in map while random in case of unordered maps
    // m[1] = "babbar";
    // m[13] = "kumar";
    // m[2] = "love";

    // m.insert({5,"bheem"});
    // cout<<"Before erase ->"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" : "<<i.second<<endl;
    // }
    // cout<<"Finding -13 -> "<<m.count(-13)<<endl;
    
    // m.erase(13);
    // cout<<"after erase ->"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" : "<<i.second<<endl;
    // }

    // auto it = m.find(5);

    // for(auto i = it;i != m.end(); i++){
    //     cout<<(*i).first<<endl;
    // }

    // cout<<"*******************************"<<endl;

    // vector<int> v;

    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(6);
    // v.push_back(7);

    // cout<<"Finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

    // cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    // cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    // int a = 5, b = 8;
    // cout<<"max : "<<max(a,b)<<endl;
    // cout<<"min : "<<min(a,b)<<endl;

    // swap(a,b);
    // cout<<"a-> "<<a<<endl;

    // string abcd = "abcd";
    // reverse(abcd.begin(),abcd.end());
    // cout<<"string -> "<<abcd<<endl;

    // rotate(v.begin(),v.begin()+1,v.end());
    // cout<<"after rotate : "<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;

    // sort(v.begin(),v.end());
    // for(int i:v){
    //     cout<<i<<" ";
    // }

    return 0;
}