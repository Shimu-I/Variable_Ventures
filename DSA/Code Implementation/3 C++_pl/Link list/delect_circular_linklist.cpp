
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




int insertEnd(Node* &tail, int n){
	Node* temp = new Node(n);
	tail -> next = temp;
	tail = temp;

}
int printNode(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
cout << endl;

}



#include <iostream>
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

int detectCircular(Node* head) {
    if (!head) return 0;
    
    Node* slow = head;
    Node* fast = head;
    
    // Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    
    // If there's no cycle
    if (!fast || !fast->next) return 0;
    
    // Count the length of the cycle
    int length = 1;
    slow = slow->next;
    while (slow != fast) {
        slow = slow->next;
        length++;
    }
    
    return length;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head; // Creating a cycle
    
    std::cout << "Length of the cycle: " << detectCircular(head) << std::endl;
    
    // Freeing memory
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
    
    return 0;
}




