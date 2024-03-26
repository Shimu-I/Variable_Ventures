// Stack  palindrome using linklist

#include <iostream>
# include <cstring>
using namespace std;

class Node{
    public:
    char data;
    Node* next;

    Node( char data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        char value = this -> data;

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

     void push(char item){

        Node* newNode = new Node(item);
        newNode -> next = top;
        top = newNode;


     }

     void pop(){
         if( top == NULL){
            cout << "The stack is underflow" << endl;
         }
         else{
            Node* temp = top;
            top = top -> next;
            temp -> next = NULL;
            delete temp;
         }

     }

     int isEmpty(){
         if( top == NULL){
            return 1;
         }
         else{
            return 0;
         }
     }


};




    //smaller version
     /*

     bool isPalindrome(string str){
        int len = str.length();
        for( int i = 0 ; str[i] != 0 ; i++){
            push(str[i]);
        }
        for( int i = 0 ; i< len ; i++){
            if( (top -> data) != (str[i]) ){
                    return false;
            }
            else{
                return true;
            }
        }

     }
     */



     //bigger version
     //is alpha function for checking if it is alphabet or not

bool isPalindrome(string str){
    Stack s;
    int len = str.length();
     for( int i = 0 ; i < len ; i++ ){
        if( (isalpha(str[i]) ) && (str[i] != 'x')  )
           s.push(tolower(str[i]));
     }

     for( int i = 0 ; i < len ; i++ ){
        if( s.isEmpty() || ( isalpha(str[i]) ) && (str[i] != 'x')  )
           if( (s.top -> data) != tolower(str[i])){
                return false;
           }
           else {
            return true;
           }
     }
}



int main(){
    string str;

cout << "Enter your string: ";
cin >> str;

if(isPalindrome(str)){
    cout << "Yes it is palindrome." << endl;
}
else{
    cout << "No it is not palindrome" << endl;
}

cout << endl;
}
