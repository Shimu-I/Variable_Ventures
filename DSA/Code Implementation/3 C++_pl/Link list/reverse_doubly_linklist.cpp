#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;
        Node(int data){
            this -> data = data;
            this -> pre = NULL;
            this -> next = NULL;
        }
};

void insertNode(Node* &tail, int data){
    Node* newNode = new Node(data);
    

    tail -> next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

int printNode(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
cout << endl;

}


int printNodeReverse(Node* &head){
	Node* temp = head;
	
	while((temp != NULL) && (temp -> next != NULL)){
		
		temp = temp -> next;
	}

while(temp  != NULL){
		cout << temp -> data << " ";
		temp = temp -> pre;
	}


}
int main(){
    Node* node = new Node(20);
    Node* head = node;
    Node* tail = node;

    insertNode(tail, 70);
    insertNode(tail, 79);
    insertNode(tail, 30);
    insertNode(tail, 89);
    printNode(head);

cout << endl;
    printNodeReverse(head);
}