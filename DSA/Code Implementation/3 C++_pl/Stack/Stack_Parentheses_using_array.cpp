//postfix evaluation
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

    bool isEmpty(){
        if( top == -1 ){
            return true;
        }
        else false;
    }

     void display(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
                cout << "Stack list: ";
            for( int i = top ; i >=0 ; i--){
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }

};


bool valid_parenteses(string exp){
Stack s;
        for( int i = 0 ; i < exp.length() ; i++ ){
            char c = exp[i];

            if( c =='(' || c =='{' || c == '['){
                s.push(c);
            }
            else if( !s.isEmpty()  &&  ((s.getTop() == '(' && c == ')') ||
                                        (s.getTop() == '{' && c == '}') ||
                                        (s.getTop() == '[' && c == ']') ) )
            {

                        s.pop();
            }
            else{
                       return false;
            }


        }
            if( s.isEmpty()){
                return true;
            }
            return false;
}
int main(){
//string s = "(){}[]";
string u;
cout << "Enter your string input:  " << endl;
getline(cin, u);



bool status = valid_parenteses(u);

if( status ){
    cout << " Valid" << endl;
}
else{
    cout << "Not Valid" << endl;
}


}


/*

*/
