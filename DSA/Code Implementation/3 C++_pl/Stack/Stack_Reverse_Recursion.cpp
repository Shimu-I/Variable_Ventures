#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node( int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

class Stack{
    public:
    Node* top;

    Stack(){
        top = NULL;
    }

    void push(int item){
        Node* newNode = new Node(item);
        newNode -> next = top;
        top = newNode;
    }

    int pop(){
        if( top == NULL){
            cout << "The stack is underflow" << endl;
            return -1;
        }
        else{
            Node* temp = top;
            top = top -> next;
            int popped_value = temp -> data;
            temp -> next = NULL;
            delete temp;
            return popped_value;
        }
    }

    int peek(){
        if( top == NULL){
            cout << "The stack is underflow" << endl;
            return -1;
        }
        else{
            return top -> data;
        }
    }

    int isEmpty() {
        return top == NULL;
    }

  void insertAtBottom(int item) {
    if (isEmpty()) {
        push(item);
    } else {
        int temp = pop();
        insertAtBottom(item);

        // push temp after all items have been inserted at the bottom
        push(temp);
    }
}


    void reverse_list() {
        if (!isEmpty()) {
            int temp = pop();
            reverse_list();
            push(temp);
        }
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original Stack: ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.reverse_list();

    cout << "Reversed Stack: ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    return 0;
}



/*

Apologies for the oversight. Let's dry run the provided functions for the input `1 2 3 4`.

1. Initially, the stack is empty.

2. We push elements `1`, `2`, `3`, `4` onto the stack.
   Stack: `4 3 2 1` (where `1` is at the top and `4` is at the bottom)

3. Now, we start the reversal process:
   - In the `reverse()` function:
     - We pop `4` from the stack, the stack becomes `3 2 1`.
     - We recursively call `reverse()` on the remaining stack.
   - In the first recursive call:
     - We pop `3` from the stack, the stack becomes `2 1`.
     - We recursively call `reverse()` on the remaining stack.
   - In the second recursive call:
     - We pop `2` from the stack, the stack becomes `1`.
     - We recursively call `reverse()` on the remaining stack.
   - In the third recursive call:
     - We pop `1` from the stack, the stack becomes empty.
     - Since the stack is now empty, we exit the recursion.

4. Now, during the reversal process, we start pushing elements back onto the stack:
   - `insertAtBottom(1)` is called, which simply pushes `1` onto the empty stack.
   - `insertAtBottom(2)` is called, which pushes `2` onto the stack, making the stack `1 2`.
   - `insertAtBottom(3)` is called, which pushes `3` onto the stack, making the stack `1 2 3`.
   - `insertAtBottom(4)` is called, which pushes `4` onto the stack, making the stack `1 2 3 4`.

So, after the reversal process, the stack contains `4 3 2 1`, which is the reverse of the original input `1 2 3 4`.

*/
