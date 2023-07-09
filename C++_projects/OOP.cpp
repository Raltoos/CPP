#include <iostream>
using namespace std;

class Hero{

    //properties
    public:
    int health;

    Hero(int health){
        this -> health = health;
    }
    
    private:
    char level;

};

int main(){

    Hero h1(80);
    // Hero *h2 = new Hero;

    // Hero h2(h1); -- copy constructor has been called 


    return 0;
}

//access modifiers - public, private and protected 
//default constructors
//parameterized constructors
//copy constructors
