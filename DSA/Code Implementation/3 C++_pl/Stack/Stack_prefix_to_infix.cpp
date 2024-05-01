//prefix to infix
// important note the Stack need to be string type

#include <iostream>
#include <string>
using namespace std;
#define N 50

class Stack{
    public:
    int top;
    string* stack;

    Stack(){
        top  = -1;
        stack = new string[N];
    }

    void push(string item){
        if( top == N -1){
            cout << "The stack is overflow from push" << endl;
        }
        else{
            top++;
            stack[top] = item;

        }

    }

    string pop(){
        if( top == -1){
            cout << "The stack is underflow  from pop" << endl;
            return 0;
        }
        else{
            string d = stack[top];
            top--;
            return d;
        }
    }

    string getTop(){
        if( top == -1){
            cout << "The stack is underflow from top" << endl;
            return 0;
        }
        else{
            return  stack[top] ;
        }
    }

};


// postfix to infix precedence function not needed

bool isOperand(char op){
    return ((op >= 'a' && op <= 'z') || (op >= 'A' && op <= 'Z'));
}


string prefix_to_infix(string exp){
    Stack s;
    string infix;

    for( int i = exp.length()-1 ; i >=0 ; i--){

        if(isOperand(exp[i])){
            string op(1, exp[i]);
            s.push(op);

        }
        else{
            string op1 = s.getTop();
            s.pop();
            string op2 = s.getTop();
            s.pop();
            s.push("(" + op1 + exp[i] + op2 + ")");


        }
    }
    return s.getTop();

}

int main(){
        string prefix = "+a-*b^-^cde+f*ghi";

          string infix = prefix_to_infix(prefix);
            cout << "Infix form: " <<infix<< endl;

}
