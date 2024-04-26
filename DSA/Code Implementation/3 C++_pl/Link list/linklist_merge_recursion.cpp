
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

        if( count >= 50 ){
        cout << "Can't insert anymore. The number of input should not exceed 50." << endl;
       }
       else if( data < -100 && data > 100){
        cout << "Invalid data. Node value should be between -100 and 100." << endl;
       }

       else{
            Node* new_Node = new Node(data);
            tail -> next = new_Node;
            tail = new_Node;
            count++;
       }
    }

    void display_Node(Node* &head){
        Node* temp = head;
        cout << "The link list is:";
        while ( temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }


 Node* mergeTwoLists(Node* list1, Node* list2) {
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }

    if (list1->data < list2->data) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}



int main(){
    Node* list1 = NULL;
    Node* list2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;

    int num;
    int count1 = 0;
    int count2 = 0;

    cout << "Enter the values for list1 (enter -1 to quit):";
    while( cin >> num && num != -1 ){
        if( list1 == NULL){
            list1 = new Node(num);
            tail1 = list1;
            count1++;
        }
        else{
            insert_Node(tail1, count1, num);
        }
    }

    cout << "Enter the values for list2 (enter -1 to quit):";
    while( cin >> num && num != -1 ){
        if( list2 == NULL){
            list2 = new Node(num);
            tail2 = list2;
            count2++;
        }
        else{
            insert_Node(tail2, count2, num);
        }
    }

    Node* mergedList = mergeTwoLists(list1, list2);
    display_Node(mergedList);

    return 0;
}

/*

Input:

list1 = [1 2 4],
list2 = [1 3 4]
Output: [1 1 2 3 4 4]

*/
