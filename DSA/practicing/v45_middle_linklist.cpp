//2nd approach



//using singly linklist
#include <iostream>
using namespace std;

//creating a node template for linklist
class Node{
	public:
	int data;
	Node* next;
	
//Node constructor
	Node(int data){
	this -> data = data;
	this -> next = NULL; 	
		}

		~Node(){
		int value = this -> data;
		if(this -> next != NULL){
			delete next;
			this -> next = NULL;
		}

	}
};


int insertStart(Node* &head, int n){
	Node* temp = new Node(n);
	temp -> next = head;
	head = temp;

}

int insertEnd(Node* &tail, int n){
	Node* temp = new Node(n);
	tail -> next = temp;
	tail = temp;

}


int insertPos(Node* &head,Node* &tail,int pos, int n){

	Node* temp = head;
	if(pos == 1){
		insertStart(head, n);
		return 0;
	}
	int count = 1;
	
	while(count < pos-1){
		temp = temp -> next;
		count++;
	}

	if(temp -> next  == NULL){
		insertEnd(tail, n);
		return 0;
	}

	Node* nodePH = new Node(n);
	nodePH -> next = temp -> next;
	temp -> next = nodePH;

}


Node* middleNode(Node* &head){
//if there is only one node
	if((head == NULL ) || head -> next == NULL){
		return head;
	}
//if thereis only 2  nodes
	if(head ->  next -> next == NULL){
		return head -> next;
	}	
	
	Node* slow = head;
	Node* fast = head -> next;

	while(fast != NULL){
		fast = fast -> next;
		if( fast != NULL){
			fast = fast -> next;
		}
		slow = slow -> next;
	}
	return slow;
	
}


int printNode(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
cout << endl;

}
int main(){
	//creating node object by attocating new memory
	Node* node1 = new Node(14);
	Node* head = node1;

	insertStart(head, 77);
    insertStart(head, 567);
	Node* tail = node1;
	insertEnd(tail, 56);
	//insertPos(head,tail,2, 696);
	
    cout << "Link list: " ;
    printNode(head);
    cout << endl;

    Node* take = middleNode(head);
    cout<<"Middle node is : "<< take -> data << endl;

  

}