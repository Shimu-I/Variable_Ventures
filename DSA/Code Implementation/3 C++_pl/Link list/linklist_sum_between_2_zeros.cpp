
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


void insertNode(Node*& tail, int data) {
    if (data < 0 || data > 1000) {
        cout << "Invalid data: " << data << ". Data should be in the range [0, 1000]." << endl;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}



void displayList(Node* head) {
    while (head != NULL) {
        if(head->data != 0) {
            cout << head->data << " ";
        }
        head = head->next;
    }
    cout << endl;
}


Node* modifyLinkedList(Node* head) {
    Node* ZZZ = new Node(0);
    Node* newTail = ZZZ;
    Node* current = head->next;

    while (current != nullptr) {
        int sum = 0;

        while (current != nullptr && current->data != 0) {
            sum += current->data;
            current = current->next;
        }

        newTail->next = new Node(sum);
        newTail = newTail->next;

        // there are still nodes left in the original list 
        if (current != nullptr) 
        current = current->next; 

    }

    Node* modifiedHead = ZZZ->next;
    delete ZZZ;
    return modifiedHead;
}

int main() {
    Node* head = new Node(0);
    Node* tail = head;

    cout << "Enter the values for the linked list (enter -1 to end input):" << endl;
    int num;
    int count = 1;

    while (cin >> num && num != -1) {
        if (count >= 2 * 1e4) {
            cout << "Invalid input: The number of nodes should not exceed 2*10^4." << endl;
            break;
        }
        insertNode(tail, num);
        count++;
    }

    if (tail->data != 0) {
        insertNode(tail, 0);
        count++;
    }

    if (count < 3) {
        cout << "Invalid input: The number of nodes should be at least 3." << endl;
        return 0;
    }


    Node* modifiedHead = modifyLinkedList(head);
    displayList(modifiedHead);

    while (modifiedHead != nullptr) {
        Node* temp = modifiedHead;
        modifiedHead = modifiedHead->next;
        delete temp;
    }

    return 0;
}



/*

input: 0 3 1 0 4 5 2 0
output: 4 11

input: 0 1 0 3 0 2 2 0
output: 1 3 4

*/
