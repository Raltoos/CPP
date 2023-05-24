#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the denomination : ";
    cin>>n;
    
    int hund = 0, fif = 0, twen = 0, one = 0;
    switch(1){
        case 1:
            hund += n/100;
            n %= 100;
        case 2:
            fif += n/50;
            n %= 50;
        case 3:
            twen += n/20;
            n %= 20;
        case 4:
            one += n/1;
            n %= 1; 
    }

    
    cout<<"No of hundred rupees notes : "<<hund<<endl;
    cout<<"No of fifty rupees notes : "<<fif<<endl;
    cout<<"No of twenty rupees notes : "<<twen<<endl;
    cout<<"No of one rupees notes : "<<one<<endl;
}
