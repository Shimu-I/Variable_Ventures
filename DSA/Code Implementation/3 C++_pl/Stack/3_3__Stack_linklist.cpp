#include <iostream>
using namespace std;
#define N 5


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

class Stack{
    public:
    int sizee;
    Node* top;
    int* stack;

    Stack(int sizee){
    this -> sizee = sizee;
    top = NULL;
    stack = new int [sizee];
    }


    void push(int data){
        Node* newNode = new Node(data);
        newNode -> next = top;
        top = newNode;
    }


    void pop(){
        if( top == NULL){
            cout << "Underflow";
        }
        else{
            Node* newNode = top;
            top = top -> next;
            newNode -> next = NULL;
            delete newNode;
        }
    }


    void peek(){
        if( top == NULL){
            cout << "Underflow";
        }
        else{
             cout << "The peek value is: " << top -> data << endl;
        }
    }


    void display(){
        if( top == NULL){
            cout << "Underflow";
        }
        else{
               Node* temp = top;
               cout << "The stack linklist is: ";
                while(temp != NULL){
                    cout << temp -> data << " ";
                    temp = temp -> next;
                }
        }
        cout << endl;
    }

};

int main(){
int n = 5;
    Stack s(n);

s.push(23);
s.push(29);
s.push(13);
s.display();
s.peek();
s.pop();
s.peek();
s.display();


}
