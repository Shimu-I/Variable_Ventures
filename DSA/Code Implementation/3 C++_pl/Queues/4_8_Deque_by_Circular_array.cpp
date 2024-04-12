#include <iostream>
using namespace std;
#define N 5

class Deque{
    public:
    int front;
    int rear;
    int *deque;

    Deque(){
        front = -1;
        rear = -1;
        deque = new int [N];
    }


void enqueueAtFront (int data){
    if((front == rear + 1) || (front == 0 && rear == N-1)){
        cout << "The queue is full." << endl;
    }

    else if(front == -1 && rear == -1){
        front = rear = 0;
        deque[front] = data;
    }
    else if( front == 0){
        front = N -1;
        deque[front] = data;
    }
    else{
        front --;
        deque[front] = data;
    }
}


void enqueueAtRear (int data){
    if((front == rear + 1) || (front == 0 && rear == N-1)){
        cout << "The queue is full." << endl;
    }

    else if(front == -1 && rear == -1){
        front = rear = 0;
        deque[rear] = data;
    }
    else if( rear == N -1){
        rear = 0;
        deque[rear] = data;
    }
    else{
        rear ++;
        deque[rear] = data;
    }
}


void getFront(){
     if(front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else{
        cout << "The front value is: "<< deque[front];
    }
    cout << endl;
}

void getRear(){
     if(front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else{
        cout << "The rear value is: "<< deque[rear];
    }
    cout << endl;
}


void dequeueFromFront (){
    if( front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else if( front == rear){
        cout << "The deleted value is: " << deque[front] << endl;
        front = rear = -1;
    }
    else if( front == N-1){
        cout << "The deleted value is: " << deque[front] << endl;
        front = 0;
    }
    else{
        cout << "The deleted value is: " << deque[front] << endl;
        front++;
    }

}


void dequeueFromRear (){
    if( front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else if( front == rear){
        cout << "The deleted value is: " << deque[rear] << endl;
        front = rear = -1;
    }
    else if( rear == 0){
        cout << "The deleted value is: " << deque[rear] << endl;
        rear = N -1;
    }
    else{
        cout << "The deleted value is: " << deque[rear] << endl;
        rear --;
    }
}




void display(){


     if( front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else{
         cout << "The list is: " ;
        int i = front;

        while( i != rear){
            cout << deque[i] << " ";
            i = (i + 1) % N;
        }
        cout << deque[rear];

    }

    cout << endl;
}




};




int main(){
    Deque d;


d.enqueueAtFront (2);
d.enqueueAtFront (5);
d.enqueueAtRear (-1);
d.enqueueAtRear (0);
d.enqueueAtFront (7);
d.enqueueAtFront (4);

d.display();

d.dequeueFromFront ();
d.dequeueFromRear ();
d.dequeueFromFront ();

d.display();

    /*
d.enqueueAtFront ();
d.dequeueFromFront ();
d.enqueueAtRear ();
d.dequeueFromRear ();
d.display();
d.getFront ();
d.getRear ();
d.isFull ();
d.isEmpty ();
    */



}
