
//Stack normal reverse using array

#include <iostream>
using namespace std;

class Stack{
    public:
    int sizee;
    int top;
    char* stack;
    bool pushf;

    Stack(int sizee){
        this -> sizee = sizee;
        top  = -1;
        stack = new char[sizee];
        pushf = false;
    }

    int push(char item){
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

        void display(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
                cout << "The stack is: ";

            for( int i = 0 ; i <= top ; i++){
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }

    void reverse_display(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
                cout << "The reverse stack is: ";
            for( int i = top ; i >= 0 ; i--){
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
        cout << "Option 2 for display" << endl;
        cout << "Option 3 for reverse display" << endl;
        cout << endl;
        cout << endl;

            cout << "Enter your option: ";

            cin >> option;

        switch(option){
        case 1:
            if( !s.pushf){
                cout << "Input string: ";
                string str;
                cin >> str;

                for(int i = 0 ; i < str.length() ; i++){
                   s.push(str[i]);
                }

            }
            else{
                cout << "Push function already executed" << endl;
            }
            break;

        case 2:
            s.display();
            break;

        case 3:
            s.reverse_display();
            break;

        default: cout << "Invalid Input" << endl;


        }

    }while( option != 0);

cout << endl;

}
