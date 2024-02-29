#include <iostream>
using namespace std;
#define MAX 100

class Stack {
    int top;

    public:

        int a[MAX];
        //int *a = new int[];

        Stack(){
            top = -1;
        }

        bool push(int x){
            if (top >= (MAX - 1)){
                cout << "Stack Overflow";
                return false;
            }else{
                a[++top] = x;
                cout << x << " pushed into the stack\n";
                return true;
            }
        }

        int pop(){
            if (top < 0){
                cout << "Stack underflow";
                return 0;
            }else{
                int x = a[top--];
                return x;
            }
        }

        int peek(){
            if (top < 0){
                cout << "Stack is empty";
                return 0;
            }else{
                int x = a[top];
                return x;
            }
        }

        bool destroy(){
            if(top < 0){
                cout << "Stack already empty";
                return false;
            }else{
                while(top >= 0){
                    (*this).pop();
                }
                cout << "Stack successfully destroyed.." << endl;
                return true;
            }
        }

        void display(){
            if(top < 0){
                cout << "Stack is empty";
            }else{
                cout << "Current stack : " << endl;
                for(int i = 0; i <= top; i++){
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }

        bool is_empty(){
            if (top < 0){
                return true;
            }else{
                return false;
            }
        }
};

int main() {

    Stack stk;

   cout << "Welcome to the stack creator" << endl;
   cout << "Please select the desired option from the list below : " << endl;
   cout << "1] Push an element in the stack" << endl;
   cout << "2] Pop the last element from the stack" << endl;
   cout << "3] Peek the last element of the stack" << endl;
   cout << "4] Destroy the stack" << endl;
   cout << "5] Display the current stack" << endl;

   while (true){
       int option;
       cout << "Select the desired option : ";
       cin >> option;

       switch (option){
           case 1:
               int element;
               cout << "Enter the element : ";
               cin >> element;
               stk.push(element);
               break;

           case 2:
               cout << stk.pop() << " popped from the stack..." << endl;
               break;

           case 3:
               cout << stk.peek() << " is the topmost element of the stack" << endl;
               break;

           case 4:
               stk.destroy();
               break;

           case 5:
               stk.display();
               break;

           default:
               cout << "Invalid Input!" << endl;
       }

       bool cont;
       cout << "Do you want to operate further ? : ";
       cin >> cont;

       if (!cont){
           break;
       }
   }

    return 0;
}
