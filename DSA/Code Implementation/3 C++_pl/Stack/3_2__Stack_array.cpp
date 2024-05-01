//Stack using array

#include <iostream>
using namespace std;

class Stack{
    public:
    int sizee;
    int top;
    int* stack;
    bool pushf;

    Stack(int sizee){
        this -> sizee = sizee;
        top  = -1;
        stack = new int[sizee];
        pushf = false;
    }

    int push(int item){
        if( top == sizee -1){
            cout << "The stack is overflow" << endl;
        }
        else{
            top++;
            stack[top] = item;
            pushf = false;
        }
        return 1;
    }

    void pop(){
        if( top == -1){
            cout << "The stack is underflow" << endl;
        }
        else{
            top--;
        }
    }

    void peek(){
        if( top == -1){
            cout << "The stack is underflow" << endl;
        }
        else{
            cout << "The peek element is: " << stack[top] << endl;
        }
    }

    int isEmpty(){
        if( top == -1){
            return 1;
        }
        else return 0;

    }

    void display(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
            for( int i = 0 ; i <= top ; i++){
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }


};


int main(){
    //Stack s = new Stack(5);
    Stack s(5);



int option;


    do{
        cout << "Option 1 for push" << endl;
        cout << "Option 2 for pop" << endl;
        cout << "Option 3 for peek" << endl;
        cout << "Option 4 for isEmpty" << endl;
        cout << "Option 5 for display" << endl;
        cout << endl;
        cout << endl;

            cout << "Enter your option: ";

            cin >> option;

        switch(option){
        case 1:
            if( !s.pushf){
                cout << "Input value: ";
                int item;
                cin >> item;
                s.push(item);
            }
            else{
                cout << "Push function already executed" << endl;
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
             cout << "The stack is empty" << endl;
            }
            else{
               cout << "The stack is not empty" << endl;
            }
            break;

        case 5:
            s.display();
            break;

        default: cout << "Invalid Input" << endl;


        }

    }while( option != 0);

cout << endl;

}

