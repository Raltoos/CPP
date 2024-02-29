#include<iostream>
using namespace std;
#define LEN 100

int arr[LEN];

class Queue{
    public:

    int front = -1;
    int rear = -1;


    void enQueue(int data){
        if(NotFull()){
            arr[++(rear)] = data;
            if(front == -1) front = 0;
        }else{
            cout<<"Queue full!"<<endl;
        }
    }

    int deQueue(){
        if(NotEmpty()){
            int temp = arr[front];
            if(front == rear) front = rear = -1;
            else front++;

            return temp;
        }else{
            cout<<"Queue empty!"<<endl;
        }
    }

    void destroyQueue(){
        if(NotEmpty()){
            while(NotEmpty()){
                cout<<"Deleting "<<deQueue()<<endl;
            }
        }else cout<<"Empty Queue!"<<endl;
    }

    bool NotFull(){
        if(rear == LEN - 1){
            return false;
        }else return true;
    }

    bool NotEmpty(){
        if(front != -1){
            return true;
        }else return false;
    }

    void printQueue(){
        if(NotEmpty()){
            for(int i = front; i < rear; i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }else cout<<"Empty Queue!"<<endl;
    }
};

int main(){

    Queue q,q2;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);

    q.printQueue();  

    cout<<"Dequeue "<<q.deQueue()<<endl;
    cout<<"Dequeue "<<q.deQueue()<<endl;

    q.printQueue();

    q.destroyQueue();  

    q.printQueue();

    return 0;
}