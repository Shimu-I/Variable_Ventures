// implementing Queue using stack


#include <iostream>
using namespace std;
#define N 5

class Queue{
    public:
    int top1;
    int top2;
    int count;
    int *stack1, *stack2;

    Queue(){
        top1 = -1;
        top2 = -1;
        count = 0;
        stack1 = new int[N];
        stack2 = new int[N];

    }

void push1(int data){
    if( top1 == N - 1){
        cout << "The queue is Full" << endl;
    }
    else{
        top1++;
        stack1[top1] = data;
    }
}


void push2(int data){
    if( top2 == N - 1){
        cout << "The queue is Full" << endl;
    }
    else{
        top2++;
        stack2[top2] = data;
    }
}


int pop1(){
    return stack1[top1--];
    //top1--; this line does't work
}


int pop2(){
    return stack2[top2--];
    //top2--; this line does't work
}


void enqueue(int data){
    push1(data);
    count++;
}


void dequeue(){
    int a, b;
    if( top1 == -1 && top2 == -1){
        cout << "The queue is empty" << endl;
    }
    else{
        for( int i = 0 ; i < count ; i++){
            a = pop1();
            push2(a);
            //alternative push2(pop1());
        }
        b = pop2();
        cout << "The deleted element is : " << b << endl;
        count --;

        for( int i = 0 ; i < count ; i++){
            a = pop2();
            push1(a);
            //alternative push2(pop1());
        }
    }
}

void display(){
    //can't write count variable
    cout << "The list is: " ;
    for(int i = 0; i <= top1; i++){
        cout << stack1[i] << " ";
    }

    cout << endl;
}



};



int main()
{
    Queue q;

q.enqueue(5);
q.enqueue(2);
q.enqueue(-1);
q.display();

q.dequeue();
q.display();

q.enqueue(1);
q.display();


}
