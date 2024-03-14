#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
         int *arr;
         int top;
         int size;

         Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
         }

    void push( int element) {
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

void pop(){
    if(top >= 0){
        top--;
    }
    else{
        cout << "Stack UnderFlow" << endl;
    }
}


int peek(){
    if( top >= 0){
        return arr[top];
    }
    else{
        cout << "Stack is Enpty" << endl;
        return -1;
    }
}

bool isEmpty(){
    if( top == -1){
        return true;
    }
    else{
        return false;
    }
}


bool isEnpty(){
    if( top == -1){
        return true;
    }
    else{
        return false;
    }
}



};







int main(){
    Stack st(5);

    st.push(78);
    st.push(80);
    st.push(78);
    st.push(80);
    st.push(78);
    st.push(80);

    cout << st.peek() << endl;
    st.pop();


    if( st.isEmpty()){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }




    /*
        stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();
    

    cout << "Printing Top element: " <<  s.top() << endl;

    if( s.empty()){
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is: " << s.size() << endl;
    return 0;
    
    */

}