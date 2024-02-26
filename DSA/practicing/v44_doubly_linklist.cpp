#include <iostream>
using namespace std;

class Node{
    public:
	int data;
	Node* prev;
	Node* next;

	Node(int data){
		this -> data = data;
		this -> prev = NULL;
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

void printNode(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;	
	}
cout << endl;

}

/*
int insertFirst(Node* &head, int n){
	Node* temp = new Node(n);
	temp -> next = head;
	head -> prev = temp;
	head = temp;

}

*/

/*
int insertEnd(Node* &tail, int n){
	Node* temp = new Node(n);
	tail -> next = temp;
	temp-> prev = tail;
	tail = temp;
}

*/

int insertFirst(Node* &head,Node* &tail, int n){
	if(head == NULL){
		Node* temp = new Node(n);
		head = temp;
		tail = temp;
	}
	else{
		Node* temp = new Node(n);
		temp -> next = head;
		head -> prev = temp;
		head = temp;

	}
}


int insertEnd(Node* &tail,Node* &head, int n){
	if(tail == NULL){
		Node* temp = new Node(n);
		head = temp;
		tail = temp;
	}
	else{
	Node* temp = new Node(n);
	tail -> next = temp;
	temp-> prev = tail;
	tail = temp;
	}
}



int insertAtPosition(Node* &head, Node* &tail, int pos, int d){
	if(pos == 1){
		insertFirst(head, tail,d);
		return 0;	
	}
	Node* temp = head;
	int count =1;
	while(count < pos-1){
		temp = temp -> next;
		count++;
	}

	if(temp->next == NULL){
		insertEnd(tail,head, d);
		return 0;
	}

		Node* nodePH = new Node(d);
		nodePH -> next = temp-> next;
		temp -> next -> prev = nodePH ;
		temp -> next = nodePH;
		nodePH -> prev = temp;
}



int deletePos(Node* &head, int pos){


	if(pos == 1){
		Node* temp = head;
		temp -> next -> prev = NULL;
		head = temp -> next;
		temp -> next= NULL;
		delete temp;

	}

	else{
	Node* prev = NULL;
	Node* curr = head;
	int count = 1;

	while(count < pos){
		prev = curr;
		curr = curr -> next;
		count++;
	}	

	
		curr -> prev = NULL;
		prev -> next = curr -> next;
		curr -> next = NULL;
		delete curr;

	


}
}

int getLength(Node* &head){
	int length = 0;
	Node* temp = head;
	while(temp != NULL){
		length++;
		temp = temp -> next;	
	}
return length;
}

int main(){
	
	Node* head = NULL;
    Node* tail = NULL;

	printNode(head);

    cout << endl;
    //cout << "Head: " << head -> data << endl;
    //cout << "Tail: " << tail -> data << endl;



	insertFirst(head,tail, 87);
	printNode(head);

    insertFirst(head,tail, 77);
	printNode(head);

    insertFirst(head,tail, 67);
	printNode(head);

    insertEnd(tail,head, 399);
	printNode(head);

	insertAtPosition(head, tail, 5, 456);
	printNode(head);

    cout << "Length of the linl list: " << getLength(head) << endl;

	deletePos(head, 5);
	printNode(head);

	cout << "Length of the linl list: " << getLength(head) << endl;

	cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
}