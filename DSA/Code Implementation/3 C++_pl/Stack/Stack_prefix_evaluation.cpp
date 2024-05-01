//prefix evaluation
// important note the Stack need to be int type

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define N 50

class Stack{
    public:
    int top;
    int* stack;

    Stack(){
        top  = -1;
        stack = new int[N];
    }

    void push(int item){
        if( top == N -1){
            cout << "The stack is overflow from push" << endl;
        }
        else{
            top++;
            stack[top] = item;

        }

    }

    int pop(){
        if( top == -1){
            cout << "The stack is underflow  from pop" << endl;
            return 0;
        }
        else{
            int d = stack[top];
            top--;
            return d;
        }
    }

    int getTop(){
        if( top == -1){
            cout << "The stack is underflow from top" << endl;
            return 0;
        }
        else{
            return  stack[top] ;
        }
    }

};


int prefix_evaluation(string exp){
    Stack s;
    string num = "";

    for( int i = exp.length()-1 ; i >=  0 ; i--){

        if( exp[i] == ' '){
                if(!num.empty()){
                    s.push(stoi(num));
                    num = "";
                }
        }

        else if(isdigit(exp[i])){
                num+=exp[i];
        }

        else{
            int v1 = s.getTop();
            s.pop();
            int v2 = s.getTop();
            s.pop();

            switch(exp[i]){
                case '+':
                    s.push( v1 + v2 );
                    break;
                case '-':
                    s.push( v1 - v2);
                    break;
                case '*':
                    s.push( v1 * v2);
                    break;
                case '/':
                    s.push( v1 / v2);
                    break;
                case '^':
                    s.push(pow(v1 , v2));
                    break;
            }
        }
    }

    return s.getTop();

}

int main(){
        string prefix = "+ * 5 4 - 6 2";

          int result = prefix_evaluation(prefix);
            cout << "Evaluation result: " <<result<< endl;

}

/*
input: + * 5 4 - 6 2
output: 24

*/
