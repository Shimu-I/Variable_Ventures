// Stack  palindrome using linklist

#include <iostream>
# include <cstring>
using namespace std;

class Node{
    public:
    char data;
    Node* next;

    Node( char data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        char value = this -> data;

            if( this -> next != NULL){
                delete next;
                this -> next = NULL;
        }
    }

};


class Stack{
    public:
    Node* top;

     Stack(){
     top = NULL;
     }

     void push(char item){

        Node* newNode = new Node(item);
        newNode -> next = top;
        top = newNode;


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

     int isEmpty(){
         if( top == NULL){
            return 1;
         }
         else{
            return 0;
         }
     }

};


bool Valid_Parentheses (string str){
    Stack s;

     for(char c : str ){

        if( ( c == '(') || ( c == '{') || ( c == '[') ){
            s.push(c);
        }

        else if ( ( c == ')') || ( c == '}') || ( c == ']') )

        //after each execution of one true parentheses it pop
            if( s.isEmpty() ||
                ( c == ')'  &&  s.top -> data ==  '(') ||
                ( c == '}'  &&  s.top -> data ==  '{') ||
                ( c == ']'  &&  s.top -> data ==  '[')  ){
                     s.pop();
                }

                else {
                   return false;
                }

     }
     return s.isEmpty(); // Check if there are remaining unmatched parentheses
}



int main(){
    string str;

cout << "Enter your parentheses: ";
cin >> str;

if(Valid_Parentheses(str)){
    cout << "True" << endl;
}
else{
    cout << "False" << endl;
}

cout << endl;
}










/*
Now, let’s dry run the function with the input string "(){}[]":

The string is "(){}[]". The function starts with an empty stack.

The first character is (. It’s an opening parenthesis, so it’s pushed onto the stack. The stack is now (.

The next character is ). It’s a closing parenthesis, and the top of the stack is the corresponding opening parenthesis (. So, ( is popped from the stack. The stack is now empty.

The next character is {. It’s an opening parenthesis, so it’s pushed onto the stack. The stack is now {.

The next character is }. It’s a closing parenthesis, and the top of the stack is the corresponding opening parenthesis {. So, { is popped from the stack. The stack is now empty.

The next character is [. It’s an opening parenthesis, so it’s pushed onto the stack. The stack is now [.

The next character is ]. It’s a closing parenthesis, and the top of the stack is the corresponding opening parenthesis [. So, [ is popped from the stack. The stack is now empty.

The function has now processed all characters in the string, and the stack is empty. So, it returns true, indicating that the string "(){}[]" is valid.
*/

































































































/*
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
            for( int i = top ; i >=0 ; i--){
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

*/



