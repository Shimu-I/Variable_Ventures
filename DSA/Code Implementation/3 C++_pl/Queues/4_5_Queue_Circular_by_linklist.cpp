#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
    ~Node(){
        int value = this -> data;

        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }

};


class Queue{
        public:

        Node* fro;
        Node* rear;

        Queue(){
            this -> fro = NULL;
            this -> rear = NULL;
        }

    void enqueue(int data){
        Node* newNode = new Node(data);

        if( fro == NULL && rear == NULL){

            fro  = rear = newNode;
            rear -> next = fro; // added this line
        }

        else{
            rear -> next = newNode;
            rear = rear -> next;
            rear -> next = fro;    // added this line
        }

    }

    void dequeue(){
            Node* temp = fro;

        if(  fro == NULL && rear == NULL  ){
            cout << "The queue is empty" << endl;

        }
        else if(rear == fro){
            rear = fro = NULL;
            temp -> next = NULL;   // added this line
            delete temp;

        }
        else{
            cout << "The deleted value is: " << fro -> data << endl;

            fro = fro -> next;
            rear -> next = fro;    // added this line
            temp -> next = NULL;   //most important line
            delete temp;
        }
    }

    void peek(){

        if(  fro == NULL && rear == NULL  ){
            cout << "The queue is empty" << endl;
        }
        else{
            cout << "The peek value is: " << fro -> data << endl;
        }
    }

    void display(){

        if(  fro == NULL && rear == NULL  ){
            cout << "The queue is empty" << endl;
        }
        else{
            Node* temp = fro;
            cout << "The queue is: ";
            while( temp -> next != fro){      // updated this line
                cout << temp -> data << " " ;
                temp = temp -> next;
            }
            cout << temp -> data;   // added this line
        }
        cout << endl;
    }

};




int main(){
Queue q;

int input  = -1;

    while( input != 0){

        cout << "Option 1: insert value" << endl;
        cout << "Option 2: delete value" << endl;
        cout << "Option 3: peek value" << endl;
        cout << "Option 4: display values" << endl;

    cout << endl;
    cout << "Enter your input : ";
    cin >> input;

        switch(input){

            case 1:
                cout << "Value: ";
                int value;
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.peek();
                break;

            case 4:
                q.display();
                break;

            default: cout << "Invalid input" << endl;
        }
    }
}
