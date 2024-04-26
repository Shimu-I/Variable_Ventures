//Link list number system conversion ( binary to decimal )

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
};

void insert_Node(Node* &tail,int &count, int data){

       if( data != 0 && data != 1){
        cout << "Invalid input. Each node should be either '0' or '1' " << endl;
       }
       else if( count >= 30 ){
        cout << "Can't insert anymore. The number of input should not exceed 30." << endl;
       }
       else{

            Node* new_Node = new Node(data);
            tail -> next = new_Node;
            tail = new_Node;
            count++;
        }
}

int get_DecimalValue(Node* head) {
    int result = 0;
    while (head != NULL) {
        result = result * 2 + head->data;
        head = head->next;
    }
    return result;
}



int main(){
        Node* head = NULL;
        Node* tail = NULL;

        int num;
        int  count = 0;

    cout << "Enter the values:";
    while( cin >> num && num != -1 ){

        if( head == 0){
            head = new Node(num);
            tail = head;
            count++;
        }
        else{
            insert_Node(tail, count, num);
        }
    }
    int result = get_DecimalValue(head);
    cout << "The decimal value is: " << result << endl;

}

/*
 Input: head = [1 0 1]
 Output: 5

 Input: head = [0]
 Output: 0

*/
