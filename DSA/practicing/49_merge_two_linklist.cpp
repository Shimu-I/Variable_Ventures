#include <iostream>
using namespace std;

// Node template for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a node at the start of a linked list
void insertStart(Node* &head, int n) {
    Node* temp = new Node(n);
    temp->next = head;
    head = temp;
}

// Function to merge two sorted linked lists
Node* mergeLinkList(Node* first, Node* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }

    Node* merged = NULL;

    if (first->data <= second->data) {
        merged = first;
        merged->next = mergeLinkList(first->next, second);
    } else {
        merged = second;
        merged->next = mergeLinkList(first, second->next);
    }

    return merged;
}

// Function to print a linked list
void printNode(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = new Node(5);
    insertStart(head1, 3);
    insertStart(head1, 1);

    Node* head2 = new Node(5);
    insertStart(head2, 4);
    insertStart(head2, 2);

    cout << "First Linked list: ";
    printNode(head1);

    cout << "Second Linked list: ";
    printNode(head2);

    Node* mergedList = mergeLinkList(head1, head2);
    cout << "Merged Linked list: ";
    printNode(mergedList);

    return 0;
}
