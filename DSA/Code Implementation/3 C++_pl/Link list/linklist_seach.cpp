
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

bool SearchNode(Node* &head, int key){
    Node* temp = head;
    bool found = false;
    while(temp != NULL){
        if((temp -> data) == key){
            found = true;
            return found;
        }
        else temp = temp -> next;

    }

return found;

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
	
	Node* node1 = new Node(14);
	Node* head = node1;
	printNode(head);
	insertStart(head, 77);
    insertStart(head, 26);
	Node* tail = node1;
	insertEnd(tail, 56);
	insertPos(head,tail,2, 696);

    cout << "Lint list: ";
    printNode(head);

    bool foundKey = SearchNode(head, 7);
    if(foundKey){
        cout << "Founded" << endl;
    }
    else{
        cout << "Not Founded" << endl;
    }
    

}