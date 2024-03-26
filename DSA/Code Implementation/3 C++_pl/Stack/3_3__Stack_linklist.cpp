// Stack using linklist

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node( int data){
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
    Node* top;
    bool pushf;

     Stack(){
     top = NULL;
     pushf = false;
     }

     void push(int item){

        Node* newNode = new Node(item);
        newNode -> next = top;
        top = newNode;

        pushf = false;
     }

     void pop(){
         if( top == NULL){
            cout << "The stack is underflow" << endl;
         }
         else{
            Node* temp = top;
            top = top -> next;
            temp -> next = NULL;
            delete temp;
         }

     }

     void peek(){
         if( top == NULL){
            cout << "The stack is underflow" << endl;
         }
         else{
            cout << "The peek element is: " << top -> data << endl;
         }
     }

     int isEmpty(){
         if( top == NULL){
            return 1;
         }
         else{
            return 0;
         }
     }

     void display(){
            if( top == NULL){
                cout << "The stack is underflow" << endl;
            }
            else{
                Node* temp = top;
                cout << "The stack Linklist is: ";
                while( temp != NULL){
                    cout << temp -> data << " ";
                    temp = temp -> next;
                }
            }
            cout << endl;
     }


};




int main(){
    Stack s;
    int option;

    do{
    cout << "Option 1 for push." << endl;
    cout << "Option 2 for pop." << endl;
    cout << "Option 3 for peek." << endl;
    cout << "Option 4 for isEmpty." << endl;
    cout << "Option 5 for display." << endl;

    cout << endl;
    cout << endl;

    cout << "Enter your option: ";
    cin >> option;

        switch(option){
            case 1:
                if( !s.pushf ){
                    cout << "User value: ";
                    int item;
                    cin >> item;
                    s.push(item);
                }
                else{
                    cout << "Push function already executed once." << endl;
                }
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                if( s.isEmpty() == 1){
                    cout << "The stack is Empty." << endl;
                }
                else{
                    cout << "The stack is not Empty." << endl;
                }
                break;

            case 5:
                s.display();
                break;

            default: cout << "Invalid Input." << endl;
        }

    }while( option != 0);


cout << endl;
}
