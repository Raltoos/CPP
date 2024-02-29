#include <iostream>
using namespace std;

class Node{
    public:
        char data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        if (this->next != NULL){
            delete next;
        }
    }
};

class Stack{
    public:
        Node* head = NULL;
        int size = 0;

    void push(char element){
        Node* temp = new Node(element);

        if(size == 0){
            this->head = temp;
            size++;
        }else{
            temp->next = head;
            head = temp;
            size++;
        }
    }

    void display(){
        if(size <= 0){
            cout<<"Stack is empty"<<endl;
        }else{
            Node* iter = head;
            while(iter != NULL){
                cout<<iter->data<<endl;
                iter = iter->next;
            }
            cout<<"----------------------------------"<<endl;
        }
    }

    char peek(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return '@';
        }else{
            cout<<head->data<<endl;
            return head->data;
        }
    }

    char pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return '@';
        }else{
            Node* temp = head;
            head = head->next;
            size--;
            
            char ch = temp->data;
            cout<<temp->data<<" was popped from the stack..."<<endl;
            return ch;
        }
    }

    bool isEmpty(){
        if(size <= 0) return true;
        else return false;
    }
};
