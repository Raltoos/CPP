#include <iostream>
using namespace std;

int recur(int n){
    // if (n == 0)
    //     return 1;

    // return 2*power(n-1);

    // if (n == 0)
    //     return ;

    // cout << n << " ";
    // recur(n-1);

    // if ( n == 1 ){
    //     return 0;
    // }
    // else if ( n == 2 ){
    //     return 1;
    // }
    // else {
    //     int ans = recur(n-1) + recur(n-2);
    //     return ans;
    // }

    // if (n == 0) return 1;
    // if (n < 0) return 0;

    // int no_of_ways = recur(n-1) + recur(n-2);

    // return no_of_ways;

    
}   

int main(){
    int n;
    cout << "Enter the starting count : ";
    cin >> n;

    int rec = recur(n);
    cout<<rec<<endl;
}