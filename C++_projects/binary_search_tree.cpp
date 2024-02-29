#include <iostream>
using namespace std;


class Node{
    public:
       int data;
       Node* left;
       Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;        
        this->right = NULL;        
    }
};

Node* insertIntoBst(Node* root, int data){
    if(root == NULL){
        Node* newNode = new Node(data);
        return newNode;
    }

    if(data > root->data){
        root->right = insertIntoBst(root->right, data);
    }else{
        root->left = insertIntoBst(root->left, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cout<<"Enter data in to bst: "<<endl;
    cin>>data;

    while(data != -1){
        root = insertIntoBst(root, data);
        cin>>data;
    }
    cout<<"------------------------------------------------------------------"<<endl;
}

void printBst(Node* root){
    if(root == NULL){
        return ;
    }

    printBst(root->left);
    cout<<root->data<<" ";
    printBst(root->right);
}

int main(){
    Node* root = NULL;
    takeInput(root);

    printBst(root);
    return 0;
}