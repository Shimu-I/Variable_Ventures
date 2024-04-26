
//Print the link list from the middle to end

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

       if( data >=1 && data <= 100){
            Node* new_Node = new Node(data);
            tail -> next = new_Node;
            tail = new_Node;
            count++;
       }
       else if( count >= 100 ){
        cout << "Can't insert anymore. The number of input should not exceed 100." << endl;
       }
    }

    void display_Node(Node* &head){
        Node* temp = head;
        cout << "The link list is:  ";
        while ( temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    Node* get_Middle_to_End(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }




int main(){
        Node* head = NULL;
        Node* tail = NULL;

        int num;
        int count = 0;

    cout << "Enter the values(enter -1 to quit): ";
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
   Node* middle = get_Middle_to_End(head);
   display_Node(middle);

   return 0;
}

/*
Input: head = [1 2 3 4 5]
Output: [3 4 5]

Input: head = [1 2 3 4 5 6]
Output: [4 5 6]
*/
