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
            this->next = NULL;
        }
        cout<<"Memory is free with data "<<value<<endl;
    }

};

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);

    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data){
    
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp; 

}
void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position, Node* &head, Node* &tail){

    if(position == 1){

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }else{

        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL){
            tail = prev;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;

    }

}


void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    print(head);

    insertAtTail(tail, 100);
    print(head);

    deleteNode(4, head, tail);
    print(head);
    cout<<tail->data<<endl;

    return 0;
}