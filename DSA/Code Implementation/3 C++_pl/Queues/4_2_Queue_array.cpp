#include <iostream>
using namespace std;
#define N 5

 class Queue{
     public:
    int fro;
    int rear;
    int* qu;

    Queue(){

        this -> fro = -1;
        this -> rear = -1;
        this -> qu = new int[N];
    }


int enqueue(int data){
        if( fro == -1 && rear == -1){
            fro = rear = 0;
            qu[rear] = data;
        }

        else if(rear == N - 1){
            cout << "Queue overload" << endl;
        }

        else{
            rear++;
            qu[rear] = data;
        }
}


int dequeue(){
         if( fro == -1 && rear == -1){
           cout << "Underflow" << endl;
        }

        else if(rear == fro){
             fro = rear = -1;
        }

        else{
            cout << "Deleted element: " << qu[fro] << endl;
            fro++;
        }
}


void peek(){

     if( fro == -1 && rear == -1){
           cout << "Underflow" << endl;
        }

    else{
            cout << "The peek value is: "<< qu[fro] << " ";
    }
    cout << endl;

}


void display(){
     if( fro == -1 && rear == -1){
           cout << "Underflow" << endl;
    }

    else{
        int i = fro;

        cout << "The queue is: ";
        while( i < rear+1){
            cout << qu[i++]<< " ";
        }
    }
    cout << endl;
}

 };


int main(){
Queue q;

int input;

    while( input != 0){

        cout << "Option 1: insert value" << endl;
        cout << "Option 2: delete value" << endl;
        cout << "Option 3: peek value" << endl;
        cout << "Option 4: display values" << endl;

    cout << endl;
    cout << "Enter your input : ";
    cin >> input;

        switch(input){

            case 1:
                cout << "Value: ";
                int value;
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.peek();
                break;

            case 4:
                q.display();
                break;

            default: cout << "Invalid input" << endl;
        }
    }
}
