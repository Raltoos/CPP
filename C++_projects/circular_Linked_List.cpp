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

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory freed for " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int data){

    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }

}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }

    do{
        cout << tail->data << " ";
        tail = tail -> next;
    }while(tail != temp);
}

void deleteNode(Node* &tail, int value){

    if (tail == NULL){
        cout<<"List is empty"<<endl;
    }else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;

        if (curr == prev){
            tail = NULL;
        }

        if (tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }

}

int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 5, 3);
    print(tail);
    deleteNode(tail,3);

    return 0;
}