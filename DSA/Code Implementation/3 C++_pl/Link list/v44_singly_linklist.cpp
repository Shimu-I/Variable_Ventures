/*

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};


int traverseLinklist(struct node *head){
    struct node *curr = head;
    int count = 0;

    while( curr != NULL){
        count++;
        curr = curr -> next;
    }
    return count;
}
int main(){


}


*/

/*

#include <iostream>
using namespace std;


class Node{
	public:
	int data;
	Node * next;
	
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

int insertFront(Node* &head , int n){
	Node* node2 = new Node(n);
	node2 -> next = head;
	head = node2;

}

int insertEnd(Node* &tail, int n){
	Node* temp = new Node(n);
	tail -> next = temp;
	tail = temp;
	

}


int insertPosi(Node* &head,Node* &tail, int pos,int n ){
	

	if(pos == 1)
	{
		insertFront(head,n);
		return 0;
	}
	Node* temp = head;
	int count = 1;
	
	if(temp -> next == NULL){
		insertEnd(tail, n);
	}

	while(count < pos-1){
		temp = temp -> next;
		count++;
	}
	Node* nodeP = new Node(n);
	nodeP -> next  = temp -> next;
	temp -> next = nodeP;
	

}


int deleteNode(Node* &head, int pos){
	if(pos == 1){
		Node* temp = head;
		head = head -> next;
		temp -> next = NULL;
		delete temp;

	}
	else{
	int count = 1;
	Node* pre = NULL;
	Node* curr = head;
	while(count < pos){
		pre = curr;
		curr = curr -> next;
	count++;				
	}
	pre -> next = curr -> next;
	curr -> next = NULL;
	delete curr;
	}





}

int printLinkList(Node* &head){
	Node* temp = head;
	

	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	
		
	}



}
int main(){
	Node* node1 = new Node(10);

	cout << node1 -> data << endl;
	//cout << node1 -> next << endl;

	Node* head = node1;
	insertFront(head, 13);
	printLinkList(head);
	
	cout << endl;

	Node* tail = node1;
	insertEnd(tail, 30);
	printLinkList(head);
	
	cout << endl;
	
	insertPosi(head,tail, 3, 700);
	printLinkList(head);
	
	cout << endl;
	cout << "Head: " << head -> data << endl;
	cout << "Tail: " << tail -> data << endl;
	cout << endl;

	cout << "Before deleting" << endl;
	printLinkList(head);
	deleteNode(head, 4);

	cout << endl;
	cout << "After deleting" << endl;
	printLinkList(head);
	
	cout << endl;
	cout << "Head: " << head -> data << endl;
	cout << "Tail: " << tail -> data << endl;

	
	
}

*/







# include <iostream>
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


int deletePos(Node* &head, int pos){


	if(pos == 1){
		Node* temp = head;
		head = head -> next;
		temp -> next = NULL;
		delete temp;


	}

	else{
	Node* pre = NULL;
	Node* curr = head;
	int count = 1;

	while(count < pos){
		pre = curr;
		curr = curr -> next;
		count++;
	}	

	
	pre -> next  =  curr -> next;
	curr -> next = NULL;
	delete curr;

	


}
}


int deleteV(Node* &head, int value){


	if(head -> data == value){
		Node* temp = head;
		head = head -> next;
		temp -> next = NULL;
		delete temp;


	}

	else{

	Node* pre = NULL;
	Node* curr = head;

		while (curr != NULL) {
    		if (curr->data == value) {
				delete curr;
    		} 
			pre = curr;	
			pre->next = curr->next;
			curr = curr->next;
			
		}
		}
}



int printNode(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
cout << endl;

}

int printNodeInReverse(Node* &head){
	if( head == NULL) return 0;

	printNodeInReverse(head -> next);
	cout << head -> data << " ";



}

void deleteSmallest() {
    if (!head) return;

    Node* pre v = nullptr;
    Node* smallest = head;
    Node* temp = head->next;

    while (temp) {
        if (temp->data < smallest->data) {
            smallest = temp;
            prev = nullptr;
        } else {
            prev = temp;
        }
        temp = temp->next;
    }

    if (!prev) {
        head = head->next;
    } else {
        prev->next = smallest->next;
    }

    delete smallest;
}


int main(){
	//creating node object by attocating new memory
	Node* node1 = new Node(14);
	Node* head = node1;


	cout<<endl;
	printNode(head);
	cout << "Head: " << head -> data << endl;
	cout << "Tail: " << head -> next << endl;

	cout<<endl;
	cout << "Inserting in the head: ";
	insertStart(head, 77);
	printNode(head);

	cout<<endl;
	Node* tail = node1;
	cout << "Inserting in the End: ";
	insertEnd(tail, 56);
	printNode(head);


	cout<<endl;
	cout << "Inserting in any position: ";
	insertPos(head,tail,2, 696);
	printNode(head);


	cout<<endl;
	cout << "After deletation with node position: ";
	deletePos(head, 2);
    printNode(head);





	cout << "Reverse: ";
	printNodeInReverse(head);

}