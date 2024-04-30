#include <iostream>
using namespace std;
#define N 10

class Stack{
    public:
    int sizee;
    int top;
    int* stack;
    bool pushf;

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
            return -1;
        }
        else{
            int d = stack[top];
            top--;
            return d;
        }
    }

    int peek(){
        if( top == -1){
            cout << "The stack is underflow from peek" << endl;
            return -1;
        }
        else{
            return  stack[top] ;
        }
    }

    int getTop(){
        return top;
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
    Stack s1 ;
int input;
cout << "User input: " ;
int s = 0;
while( cin >> input && input != -1){
    s1.push(input);
    s++;

}

cout << "Size: "<< s << endl;

Stack temp;

int m = s/2;
int i= 0;
while( i < m){
    int pop = s1.pop();
    temp.push(pop);
    i++;
}

cout<< "Deleted: " << s1.pop() << endl;

int k = s1.getTop();
cout<< "Top index: "<< k << endl;;


while( !temp.isEmpty()){
    int pop = temp.pop();
    s1.push(pop);
}
s1.display();

}


// 1 2 3 4 5 6 7 8 -1
