//postfix evaluation
// important note the Stack need to be int type

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define N 50

class Stack{
    public:
    int top;
    int* stack;

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
            return 0;
        }
        else{
            int d = stack[top];
            top--;
            return d;
        }
    }

    int getTop(){
        if( top == -1){
            cout << "The stack is underflow from top" << endl;
            return 0;
        }
        else{
            return  stack[top] ;
        }
    }

};


int postfix_evaluation(string exp){
    Stack s;
    string num = "";

    for( int i = 0 ; i < exp.length() ; i++){

        if( exp[i] == ' '){
                if(!num.empty()){
                    s.push(stoi(num));
                    num = "";
                }
        }

        else if(isdigit(exp[i])){
                num+=exp[i];
        }

        else{
            int v1 = s.getTop();
            s.pop();
            int v2 = s.getTop();
            s.pop();

            switch(exp[i]){
                case '+':
                    s.push( v2 + v1);
                    break;
                case '-':
                    s.push( v2 - v1);
                    break;
                case '*':
                    s.push( v2 * v1);
                    break;
                case '/':
                    s.push( v2 / v1);
                    break;
                case '^':
                    s.push(pow(v2 , v1));
                    break;
            }
        }
    }

    return s.getTop();

}

int main(){
        string postfix = "100 200 + 2 / 5 * 7 +";

          int result = postfix_evaluation(postfix);
            cout << "Evaluation result: " <<result<< endl;

}

/*
Input: str = “100 200 + 2 / 5 * 7 +”
Output: 757


*/



/*
Certainly! Let's break down each line:

```cpp
Stack s;
```
- This line declares an object `s` of type `Stack`. It creates an instance of the `Stack` class, which presumably represents a stack data structure.

```cpp
string num = "";
```
- This line declares a string variable `num` and initializes it to an empty string. This variable will be used to store the digits of numbers extracted from the input expression `exp`.

```cpp
for (int i = 0; i < exp.length(); i++) {
```
- This line starts a `for` loop that iterates over each character of the input string `exp`. It initializes the loop variable `i` to 0, and the loop continues as long as `i` is less than the length of the string `exp`.

```cpp
if (exp[i] == ' ') {
```
- This line checks if the current character in the input string `exp` is a space. It's looking for spaces because in many postfix expressions, numbers and operators are separated by spaces.

```cpp
if (!num.empty()) {
```
- This line checks if the `num` string is not empty. It ensures that there are digits stored in `num` before attempting to convert it to an integer and push it onto the stack `s`.

```cpp
s.push(stoi(num));
```
- This line converts the string `num` to an integer using the `stoi` function, which stands for "string to integer". It then pushes this integer onto the stack `s`. This assumes that `stoi` is a valid function that converts strings to integers.

```cpp
num = "";
```
- This line resets the `num` string to an empty string. After pushing the digits onto the stack, we need to reset `num` to start storing digits for the next number in the expression.

This portion of the code is responsible for extracting numbers from the input expression `exp`, converting them to integers, and pushing them onto the stack `s`. It assumes that numbers in the expression are separated by spaces, and it handles the extraction and conversion process accordingly.

*/
