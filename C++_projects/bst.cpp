#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insert(int data, Node* &root){
    if(root == NULL){
        return new Node(data); 
    }

    if(data < root->data){
        root->left = insert(data, root->left);
    }else if(data > root->data){
        root->right = insert(data, root->right);
    }

    return root;
}

Node* search(int key, Node* root){
    if(root == NULL || root->data == key){
        return root;
    }

    if(key < root->data){
        search(key, root->left);
    }else if(key > root->data){
        search(key, root->right);
    }
}

void inOrderPrint(Node* root){
    if(root == NULL){
        return;
    }

    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
    
}

void preOrderPrint(Node* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

void postOrderPrint(Node* root){
    if(root == NULL){
        return ;
    }

    postOrderPrint(root->left);
    postOrderPrint(root->right);
    cout<<root->data<<" ";
}

int main(){

    Node* root = new Node(10);

    insert(1, root);
    insert(11, root);
    insert(8, root);

    cout<<"1] Insert a node"<<endl;
    cout<<"2] Search a node"<<endl;
    cout<<"3] In-order traversal"<<endl;
    cout<<"4] Pre-order traversal"<<endl;
    cout<<"5] Post-order traversal"<<endl;
    cout<<"0] Exit"<<endl;

    int choice;
    do{
        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            int data;
            cout<<"Enter the data : ";
            cin>>data;
            insert(data, root);
            break;

        case 2:
            int key;
            cout<<"Enter the key: ";
            cin>>key;

            if(search(key, root) == NULL){
                cout<<"Key not found!"<<endl;
            }else{
                cout<<"Key found!"<<endl;
            }
            break;
        
        case 3:
            cout<<"In-order traversal : "<<endl;
            inOrderPrint(root);
            cout<<endl;
            break;

        case 4:
            cout<<"Pre-order traversal : "<<endl;
            preOrderPrint(root);
            cout<<endl;
            break;

        case 5:
            cout<<"Post-order traversal : "<<endl;
            postOrderPrint(root);
            cout<<endl;
            break;

        case 0:
            cout<<"Thank You"<<endl;
            break;

        default:
            cout<<"INVALID"<<endl;
            break;
        }
    }while(choice != 0);

    return 0;
}