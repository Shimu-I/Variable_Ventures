// postfix to infix
// very important ***
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

int pre(int op){
    if( op == '+' || op == '-'){
        return 1;
    }
    else if( op == '*' || op == '/'){
        return 2;
    }
    else if( op == '^'){
        return 3;
    }
    return 0;
}


string postfix_to_infix(string exp){
    Stack s;
    string infix;

    for( int i = 0 ; i < exp.length() ; i++){

        if(isOperand(exp[i])){
            string op(1, exp[i]);
            s.push(op);

        }
        else{
            string op1 = s.getTop();
            s.pop();
            string op2 = s.getTop();
            s.pop();
            s.push("(" + op2 + exp[i] + op1 + ")");


        }
    }
    return s.getTop();

}

int main(){
        string postfix = "ab*c+";

          string infix = postfix_to_infix(postfix);
            cout << "Infix form: " <<infix<< endl;

}
