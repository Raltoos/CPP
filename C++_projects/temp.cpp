#include <iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout<<"Default Constructor Called"<<endl;
        name = new char[100];
    }

    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    void print() {
        cout<<"Health : "<< this -> health <<endl;
        cout<<"Level : "<< this -> level <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    Hero Ramesh(70, 'C');

    //Copy Constructor Called
    Hero Ritesh(Ramesh);

    Ritesh.print();

    return 0;

}