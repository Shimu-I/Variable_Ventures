#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(( this -> next) != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

int function(Node* &head){
    Node* temp = head;
    Node* pre = NULL;
    Node* curr = head;

    while((curr != NULL) && ( curr ->  next) != NULL){
       pre = curr;
       curr = curr -> next;
    }

    pre -> next = curr -> next;
    curr -> next = head -> next;
    head-> next =  curr;

}


void printlinklist(Node* &head){
    Node* temp = head;
    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}
int main(){  
    cout << "Printing just fine" << endl;

    cout << "Enter the number of element: ";
    int size = 0;
    cin >> size;

    Node* head =  NULL;
    Node* newNode = NULL;
    Node* temp = NULL;
    cout << "Enter the element of link list: ";
    for( int i = 0 ; i < size ; i++){
        int element;
        cin >> element;
        newNode = new Node(element);


        if( head == NULL){
            head = newNode;
        }

        else{
            temp = head;
            while(temp -> next !=  NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        

        }
        newNode -> next = NULL;
      
    }


    cout << "Printing the linklist: ";
    printlinklist(head);

    function(head);

    cout << "Printing the linklist: ";
    printlinklist(head);

}

// 1 2 3 4 5 6
