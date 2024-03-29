
//Stack normal reverse using array

#include <iostream>
using namespace std;

class Stack{
    public:
    int sizee;
    int top;
    char* stack;
    bool pushf;

    Stack(int sizee){
        this -> sizee = sizee;
        top  = -1;
        stack = new char[sizee];
        pushf = false;
    }

    int push(char item){
        if( top == sizee -1){
            cout << "The stack is overflow" << endl;
        }
        else{
            top++;
            stack[top] = item;
            pushf = false;
        }
        return 1;
    }

        void display(){
        if( top == -1){
              cout << "The stack is underflow" << endl;
        }
        else{
                cout << "The stack is: ";

            for( int i = 0 ; i <= top ; i++){
                cout << stack[i] ;
            }
        }
        cout << endl;
    }

   void reverse_words(string str) {
    string word = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            // Print the current word in reverse
            for (int j = word.length() - 1; j >= 0; j--) {
                cout << word[j];
            }
            cout << " "; // Print space after each word
            word = ""; // Reset word for the next word
        }
        else {
            // Append character to the current word
            word += str[i];
        }
    }
    // Print the last word (if any)
    for (int j = word.length() - 1; j >= 0; j--) {
        cout << word[j];
    }
}


};


int main(){
    //Stack s = new Stack(5);
    Stack s(20);

                cout << "Input string: ";
                string str;

                getline(cin, str);
                for(int i = 0 ; i < str.length() ; i++){
                   s.push(str[i]);
                }
                s.reverse_words(str);



}
