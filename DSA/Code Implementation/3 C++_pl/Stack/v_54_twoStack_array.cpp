# include <iostream>
using namespace std;

class Stack{
    public:
    int *array;
    int top1;
    int top2;
    int size;

    Stack(int s){
        this -> size = s;
        top1 = -1;
        top2 = s;
        array = new int[s];
    }

    void push1(int element){
        if( top2 - top1 > 1){
            array[top1] = element;
            top1++;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void push2(int element){
        if( top2 - top1 > 1){
            array[top2] = element;
            top1--;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    int pop1(int element){
        if(top1 >= 0){
            int ans = array[top1];
            top1--;
            return top1;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int pop2(int element){
        if(top2 <= size){
            int ans = array[top2];
            top2++;
            return top2;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

};

int main(){

}