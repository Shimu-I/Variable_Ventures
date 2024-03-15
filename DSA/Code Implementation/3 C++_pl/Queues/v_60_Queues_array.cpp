#include <iostream>
//#include <queue>
using namespace std;

class Queue{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;

    Queue(){
        size = 1001;
        qfront = 0;
        rear = 0;
        arr = new int[size];

    }


bool isEmpty(){
    if( rear == qfront){
        return true;
    }
    else{
        return false;
    }
}

void enqueue( int element){
    if( rear == size){
        cout << "The queue is full" << endl;
    }
    else{
        arr[rear] = element;
        rear++;
    }

}

int dqueue(){
    if( rear == qfront){
        return -1;
    }
    else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if( rear  == qfront){
                rear = 0;
                qfront = 0;
            }
            return ans;

    }
}


int front(){
    if( rear == qfront){
        return -1;
    }
    else{
        return arr[qfront];
    }
}




};

int main(){





    //STL
    /*
        queue <int> q;
    
    q.push(11);
    q.push(13);
    q.push(45);
    cout << "Front of queue: " << q.front() << endl;

    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    
    cout << "Front of queue: " << q.front() << endl;
    
    q.pop();
    cout << "Size of queue: " << q.size() << endl;



  
    if( q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    
    
    */


}