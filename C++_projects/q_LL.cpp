#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

bool notEmpty(Node* &front, Node* &rear){
    if(front != NULL){
        return true;
    }else return false;
}

void enQueue(Node* &front, Node* &rear, int data){
    Node* newNode = new Node(data);

    if(notEmpty(front, rear)){
        rear->next = newNode;
        rear = newNode;
    }else{
        front = newNode;
        rear = front;
    }
}

void deQueue(Node* &front, Node* &rear){
    if(notEmpty(front, rear)){
        Node* temp = front;
        front = front->next;

        if(front == NULL)
            rear = NULL;

        cout<<"DeQueued "<<temp->data<<endl;
        temp->next = NULL;
    }else cout<<"Queue empty!"<<endl;
}

void printQueue(Node* &front, Node* &rear){
    if(notEmpty(front, rear)){
        Node* temp = front;
        while(temp != rear){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }else cout<<"Empty Queue"<<endl;
}


int main(){
    Node* front = NULL;
    Node* rear = front;

    enQueue(front, rear, 10);
    enQueue(front, rear, 20);
    enQueue(front, rear, 30);
    enQueue(front, rear, 40);
    
    printQueue(front, rear);
    
    deQueue(front, rear);
    deQueue(front, rear);
    deQueue(front, rear);
    deQueue(front, rear);

    printQueue(front, rear);

    return 0;
}