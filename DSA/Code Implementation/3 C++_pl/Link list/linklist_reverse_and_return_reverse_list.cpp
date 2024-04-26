//Print the reverse link list

#include <iostream>
using namespace std;
int count = 0;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

  void insert_Node(Node* &tail,int &count, int data){

        if( data >= -5000 && data <= 5000){
            Node* new_Node = new Node(data);
            tail -> next = new_Node;
            tail = new_Node;
            count++;
       }
       else if( count >= 5000 ){
        cout << "Can't insert anymore. The number of input should not exceed 5000." << endl;
       }
    }

    void display_Node(Node* &head){
        Node* temp = head;
        cout << "The link list is: ";
        while ( temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }


/*


 void reverse_list(Node* &head){
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;

    while( current != NULL ){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
 }

*/

Node* reverse_list(Node* head){
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;

    while( current != NULL ){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev; // return the new head of the reversed list
}


int main(){
        Node* head = NULL;
        Node* tail = NULL;

        int num;
        int count = 0;

    cout << "Enter the values (enter -1 to quit): ";
    while( cin >> num && num != -1 ){

        if( head == NULL){
            head = new Node(num);
            tail = head;
            count++;
        }
        else{
            insert_Node(tail, count, num);
        }
    }
    Node*  s  = reverse_list(head);
    display_Node(s);

    return 0;
}


/*
Input: head = [1 2 3 4 5]
Output: [5 4 3 2 1]

*/
