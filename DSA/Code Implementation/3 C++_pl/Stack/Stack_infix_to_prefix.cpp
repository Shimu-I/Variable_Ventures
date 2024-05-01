//infix to prefix
#include <iostream>
using namespace std;
#define N 50

class Stack{
    public:
    int top;
    char* stack;

    Stack(){
        top  = -1;
        stack = new char[N];
    }

    void push(char item){
        if( top == N -1){
            cout << "The stack is overflow from push" << endl;
        }
        else{
            top++;
            stack[top] = item;

        }

    }

    char pop(){
        if( top == -1){
            cout << "The stack is underflow  from pop" << endl;
            return -1;
        }
        else{
            char d = stack[top];
            top--;
            return d;
        }
    }

    char getTop(){
        if( top == -1){
            cout << "The stack is underflow from top" << endl;
            return -1;
        }
        else{
            return  stack[top] ;
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
                cout << "Stack list: ";
            for( int i = top ; i >=0 ; i--){
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }

    void ReDisplay(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
                 cout << "Stack list: ";
            for( int i = 0 ; i <= top ; i++){
                cout << stack[i] << " ";
            }
        }
        cout << endl;
    }


};


int pre(char op){
    if( op == '+' || op == '-'){
        return 1;
    }
    else if ( op == '*' || op == '/'){
        return 2;
    }
    else if( op == '^'){
        return  3;
    }
    return -1;

}

char ay(char op){
    if( op == '^'){
        return 'R';
    }
    return 'L';
}


string infix_to_postfix(string infix){
    string postfix = "";
    Stack s;


    for( int i = 0 ; i < infix.length() ; i++){
        char c  =  infix[i];

        if(( c >= 'a' &&  c <= 'z') || (c >= 'A' &&  c <= 'Z')){
            postfix += c;
        }

        else if( c == '('){
            s.push('(');
        }

        else if( c == ')'){
            while( s.getTop() != '('){
                 postfix += s.getTop();
                 s.pop();
            }
            s.pop();
        }
        else{
            while ((!s.isEmpty() && s.getTop() != '(' && pre(infix[i]) < pre(s.getTop())) ||
                    (!s.isEmpty() && s.getTop() != '(' && pre(infix[i]) == pre(s.getTop())
                                                       && ay(infix[i]) == 'L')) {
                    postfix += s.getTop();
                    s.pop();
            }
                  s.push(c);
        }
    }



        while( !s.isEmpty() ){
            postfix += s.getTop();
            s.pop();
        }
        return postfix;

}

string reverse_string(string a){
        string rev;
    for(int i = a.length()-1 ; i >= 0 ; i--){

            if( a[i] == ')'){
                a[i] = '(';
            }
            else if( a[i] == '('){
                a[i] = ')';
            }
        rev += a[i];
    }
    return rev;
}



int main(){
    Stack s1 ;

    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    //string infix = "i-(h*g+f)^(e-d^c)*b+a";



    string rev = reverse_string(infix);
    cout << "Reverse form: " << rev<< endl;


    string postfix = infix_to_postfix(rev);
    cout << "Reverse infix: " << postfix  << endl;

    string rev2 = reverse_string(postfix);
    cout << "Prefix form: " << rev2<< endl;


}

// input infix: a+b*(c^d-e)^(f+g*h)-i
//output
/*
Reverse form: i-(h*g+f)^(e-d^c)*b+a
Reverse infix: ihg*f+edc^-^b*-a+
Prefix form: +a-*b^-^cde+f*ghi

*/
