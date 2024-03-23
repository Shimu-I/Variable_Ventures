#include <iostream>
using namespace std;
#define N 5

class Stack{
    public:
    int size = N;
    int top;
    int *stack;

    Stack(int size){
            this -> size = size;
            top = -1;
            stack = new int[size];
    }


void push(){
    int n;
    cout << "Enter the push element: ";
    cin >> n;

    if( top == size-1){
        cout << "Overflow." << endl;
    }
    else{
        top++;
        stack[top] = n;
        cout << "The push item is : " << n << endl;
    }
}


void pop(){
    if( top == -1){
        cout << "Underflow" << endl;
    }
    else{
        int item = stack[top];
        top--;
        cout << "The pop item is : " << item << endl;
    }
}

void peek(){
    if( top == -1){
        cout << "Underflow" << endl;
    }
    else{
        cout << "The peek element is : " << stack[top] << endl;
    }
}
 void display(){
    for( int i = top ; i >=0 ; i--){
        cout << stack[i] << " ";
    }
 }

};



int main(){
    int data;
    Stack s(N);

    while(data != 00){
        cout << "Enter 1 for push." << endl;
        cout << "Enter 2 for pop." << endl;
        cout << "Enter 3 for peek." << endl;
        cout << "Enter 4 for display." << endl;
        cout << endl;

        cout << "Enter data for Stack: ";
        cin >> data;

        switch(data){
            case 1 :
                s.push();
                break;
            case 2 :
                s.pop();
                break;
            case 3 :
                s.peek();
                break;
            case 4 :
                s.display();
                break;
            default: cout << "Invalid input" << endl;
        }
        cout << endl;
    }
}

