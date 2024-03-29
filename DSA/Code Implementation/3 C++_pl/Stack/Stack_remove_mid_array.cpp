
//Stack using array

#include <iostream>
using namespace std;

class Stack{
    public:
    int sizee;
    int top;
    int* stac;
    bool pushf;

    Stack(int sizee){
        this -> sizee = sizee;
        top  = -1;
        stac = new int[sizee];
        pushf = false;
    }

    int push(int item){
        if( top == sizee -1){
            cout << "The stack is overflow" << endl;
        }
        else{
            top++;
            stac[top] = item;
            pushf = false;
        }
        return 1;
    }

    void pop(){
        if( top == -1){
            cout << "The stack is underflow" << endl;
        }
        else{

                int mid = (top+1)/2;
        for( int i = mid ; i < top; i++ ){
            stac[i] = stac[i+1];
            }
        }


        }


    void peek(){
        if( top == -1){
            cout << "The stack is underflow" << endl;
        }
        else{
            cout << "The peek element is: " << stac[top] << endl;
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
            for( int i = 0 ; i <= top ; i++){
                cout << stac[i] << " ";
            }
        }
        cout << endl;
    }


};


int main(){
       Stack s(20);

                cout << "Input string: ";
                string str;

                getline(cin, str);
                for(int i = 0 ; i < str.length() ; i++){
                   s.push(str[i]);
                }
                s.pop();
                s.display();

}
