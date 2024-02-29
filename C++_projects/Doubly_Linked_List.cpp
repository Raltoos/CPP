#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for element "<< value << endl;
    }

};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length; 
}

void insertAtHead(Node* &head, Node* &tail, int data){

    //if the list is empty
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    if(position == 1){
        insertAtHead(head, tail, data);
        return ;
    }

    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return ;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

void deleteNode(int position, Node* &head, Node* &tail){

    if(position == 1){

        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;

    }else{

        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL){
            tail = previous;
        }

        current -> prev = NULL;
        previous -> next = current ->next;
        current -> next = NULL;
        delete current;

    }

}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    
    insertAtHead(head, tail,20);
    print(head);

    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    print(head);

    insertAtPosition(5, 100, head, tail);
    print(head);

    deleteNode(5, head, tail);
    print(head);

    return 0;
}