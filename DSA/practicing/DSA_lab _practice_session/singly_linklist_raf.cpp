#include  <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this ->  data;
        if((this -> next) != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};


























int insertFirstNode(Node* &head, int data){
    Node* temp = new  Node(data);

    temp -> next = head;
    head = temp;
}


int insertLastNode(Node* &tail, int data){
    Node* temp = new  Node(data);
    if( tail == NULL){
        tail = temp;
    }else{
            tail -> next = temp;
            
            tail = temp;

    }

tail-> next = NULL;
}


int insertAtanyPosition(Node* &head, Node* &tail, int data, int pos){
    Node* temp = new Node(data);
    Node* curr;

    if( pos == 1){
            temp -> next = head;
            head = temp;
        if( tail== NULL){
            tail = temp;
        }
        return 0;
    }

    int count = 1;
    curr = head;
    while( count <pos -1){
        curr = curr -> next;
        count++;
    }

    temp -> next = curr  -> next;
    curr -> next = temp;

    if(( temp -> next ) == NULL){
        tail =  temp;


    }
}


int deleteAtanyPosition(Node* &head,Node*  &tail,int pos){
   
    if( pos == 1){ 
        Node* temp = head;
        head = head ->next; 
        temp -> next = NULL;
        delete temp;
       
    }



Node* pre = NULL;
Node* curr =  head;
int count = 1;
while( count < pos){
    pre = curr;
    curr = curr -> next;
    count++;
}


   pre -> next = curr -> next;
   curr -> next = NULL;
   delete curr;


}



void printingLinkList(Node* head){
    Node* temp = head;

    cout << "Full link list: ";
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}



int main (){
    cout << "Printing just fine" << endl;

    Node* newNode = new Node(99);
    Node* head = NULL;
    Node* tail = NULL;
     
     insertFirstNode(head, 8);
     insertFirstNode(head, 45);
     insertFirstNode(head, 78);
     insertLastNode(tail, 5);
     insertAtanyPosition(head, tail, 24, 4);

    printingLinkList(head);

    deleteAtanyPosition(head, tail,  3);

    printingLinkList(head);














    /*
        Node* head = NULL;
     int size = 0;
     cout << "enter the number of nodes:";
     cin >> size;
    cout << "Enter the elements of your link list:";
    for(  int i = 0 ; i < size ; i++){
        int element;
        cin >> element;
        Node* newNode = new Node(element);

            if( head == NULL){
                head = newNode;
            }
            else{
                 Node* temp = head;
                 while( temp -> next != NULL){
                    temp = temp -> next;
                 }
                 temp -> next = newNode;
            }
        
    }
    
    */

   

}


/*
while( temp -> next != NULL)
while(temp != NULL)
*/