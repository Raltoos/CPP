#include <iostream>
#include <iomanip>
using namespace std;

class Node{
    public:
        float coeff;
        int expo;
        Node* next;

    Node(float coeff, int expo){
        this->coeff = coeff;
        this->expo = expo;
        this->next = NULL;
    }
};

Node* insert(Node* &head, float coeff, int expo){
    Node* newNode = new Node(coeff, expo);

    if((head == NULL)||(head->expo < expo)){
        newNode->next = head;
        head = newNode;
    }else{
        Node* temp = head;
        while((temp->next != NULL)||(temp->next->expo >= expo)){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

Node* create(Node* &head){
    int terms;
    cout<<"Enter the number of terms in the polynomial : ";
    cin>>terms;

    float coeff;
    int expo;

    int i;
    for(i = 0; i < terms; i++){
        cout<<"Enter the coeff of the term "<<i+1<<" : ";
        cin>>coeff;
        cout<<"Enter the expo of the term "<<i+1<<" : ";
        cin>>expo;

        head = insert(head, coeff, expo);
    }
    return head;
}

void print(Node* head){
    if(head != NULL){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->coeff<<"x^"<<temp->expo<<" ";
            temp = temp->next;
            if(temp != NULL) cout<<"+ ";
            else cout<<endl;
        }
    }else cout<<"No polynomial";
}

int main(){
    cout<<setprecision(2);

    Node* head = NULL;
    cout<<"Enter the polynomial below : "<<endl;
    head = create(head);
    print(head);

    return 0;
}