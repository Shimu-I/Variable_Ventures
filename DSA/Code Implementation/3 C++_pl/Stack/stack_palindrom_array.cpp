//palindrom using array

#include <iostream>
using namespace std;
#define N 10

class Stack{
public:
    int top;
    int *stk;
    Stack(){
        this -> top = -1;
        stk = new int[N];
    }

    void push(int data){
        if( top == N - 1){
            cout << "Stack overflow from push function" << endl;
        }
        else if( top == -1){
            top = 0;
            stk[top] = data;
        }
        else{
                top++;
            stk[top] = data;
        }
    }

    int pop(){
        if( top == -1){
            cout << "Stack is underflow from push function" << endl;
            return -1;
        }
        else{
            int value = stk[top];
            top--;
            return value;
        }
    }

    int getTop(){
        if( top == -1){
            cout << "Stack is underflow from getTop function" << endl;
            return -1;
        }
        else{
            int value = stk[top];
            return value;
        }
    }

    bool isEmpty(){
        if( top == -1){
            return true;
        }
        return false;
    }

    void display(){
        if( top == -1){
            cout << "Stack is underflow from display function" << endl;

        }
        else{
            cout << "The stack is: ";
            for( int i = 0 ; i <= top ; i++){
                cout << stk[i] << " ";
            }
            cout << endl;
        }
    }



};


bool check_palindrom(string arr, int n){
    int status = false;
    Stack s;
    int mid = n / 2;

    for( int i = 0 ; i < mid ; i++){
            if( isalpha(arr[i])){
                char c = tolower(arr[i]);
                s.push(c);
            }
    }

    int start = mid;
    if( n % 2  != 0){
        start++;
    }

    for( int i = start ; i < n ; i++){
        if( !s.isEmpty() && s.getTop() == tolower(arr[i])){
               s.pop();
            status = true;

        }
    }

    if(!s.isEmpty()){
        return false;
    }
return status;

    }


int main(){

    Stack s;


    string input;
    cout << "Enter user inputs : ";

    getline(cin, input);

    int siz = input.size();
    int status = check_palindrom(input, siz );
    if( status){
        cout << "palindrom" << endl;
    }
    else{
        cout << "Not palindrom" << endl;
    }



}
// 1 2 3 4 5 6 7 8 -1
