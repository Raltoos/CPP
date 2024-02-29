#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
    }

};

class CQ{
    
    public:

    Node* front;
    Node* rear;

    CQ(){
        this->front = NULL;
        this->rear = NULL;
    }

    CQ(int data){
        Node* node = new Node(data);
        this->front = node;
        this->rear = node;
        node->next = front;
    }

    void enqueue(int data){
        Node* node = new Node(data);
        (this->rear)->next = node;
        this->rear = node;
        node->next = front;
    }

    void dequeue(){
        int element = (this->front)->data;

        this->front = (this->front)->next;
        cout << element << " was dequeued...." << endl;
    }

    void display(){
        Node* temp = this->front;
        while(temp!=rear){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }

    void destroy(){
        Node* temp = this->front;
        while(temp!=rear){
            dequeue();
            temp = temp->next;
        }
        dequeue();
        front = rear = NULL;
    }

};



int main(){

    CQ cirLst(10);

    cirLst.enqueue(20);
    cirLst.enqueue(30);
    cirLst.enqueue(40);
    cirLst.enqueue(50);
    
    cirLst.display();

    cirLst.dequeue();
    cirLst.dequeue();

    cirLst.display();

    cirLst.destroy();
    cirLst.display();

    return 0;
}