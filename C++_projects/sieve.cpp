#include<iostream>
#include<vector>
using namespace std;

void sieve(bool prime[]) {

    //setting TRUE for every number
    for(int i=2;i<=1000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000; i++) {

        if(prime[i]){
            for(int j = 2*i; j<=1000; j+=i){
                prime[j] = 0;   
            }
        }
    }
    prime[0] = prime[1] = 0;
}

int main() {
    
    cout<<"Generating prime nos in first 1000 nos ..."<<endl;
    bool prime[1000];

    sieve(prime);

    for(int i = 0; i < 1000; i++){
        if(prime[i]){
            cout<<i<<endl;
        }
    }

    return 0;
}