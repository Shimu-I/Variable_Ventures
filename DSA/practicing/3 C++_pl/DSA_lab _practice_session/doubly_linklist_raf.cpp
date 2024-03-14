#include <iostream>
using  namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* pre ;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> pre = NULL;
        
    }

    ~Node(){
        int value = this -> data;
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};





int  insertFirst(Node* &head,Node* &tail, int data){
    Node*  temp =  new Node(data);
    if( head == NULL){
        head = temp;
        tail = temp;
    }else{
        temp  -> next = head;
        head -> pre = temp;
        head =  temp;
    }
}

int  insertLast(Node* &head,Node* &tail, int data){
    Node*  temp =  new Node(data);
    if( head == NULL){
        head = temp;
        tail = temp;
    }else{
        tail  -> next = temp;
        temp -> pre = tail;
        tail =  temp;
    }
}

int insertAtanyPosition(Node* &head, Node* &tail, int data, int pos){
        if( pos  == 1){
            insertFirst( head, tail, data);
            return 0;
        }

        Node* newNode = new Node(data) ;
        Node* temp = head;
        Node* preee;
        int count = 1;

        while( count < pos-1){
           
           temp = temp -> next;
            count++;
        }
            newNode -> next = temp -> next ;
            temp -> next -> pre = newNode ;
            temp -> next = newNode ;
            newNode -> pre  = temp ;


    if( temp == NULL ){
            insertLast(head, tail, data);
            return 0;
    }


}

int deletation( Node* &head, int pos){
    if( pos == 1){
        Node* temp = head ;

        temp -> next -> pre = NULL;
        head = temp -> next;
        temp -> next= NULL;
        delete temp;

       
       
    } else {
    Node* pre = NULL;
    Node* curr = head;

    int count = 1;
    while( count < pos){
        pre = curr;
        curr = curr -> next;
        count++;
    }

    curr -> pre = NULL;
    pre -> next =  curr -> next;
    curr -> next = NULL;
    delete curr;
}

    }

  





int printLinklist(Node* &head){
    Node* temp = head;
    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){
    cout << "Printing" << endl;
    Node* head = NULL;
    Node* tail = NULL;
    Node* newNode = new Node(90);
      head =  newNode;
      tail = newNode;
    cout << "Printing the link list: ";
    printLinklist(head);

insertFirst(head, tail, 23);
cout << "Printing the link list: ";
    printLinklist(head);
 

insertLast(head, tail, 56);
cout << "Printing the link list: ";
    printLinklist(head);


insertAtanyPosition(head, tail, 577, 3);
cout << "Printing the link list: ";
    printLinklist(head);



deletation(head, 1);
cout << "Printing the deleted link list: ";
printLinklist(head);





/*
    cout << "Enter the size of the link list: ";
    int size = 0;
    cin >> size;

    cout << "Enter the elements of the link list:";
    for( int i = 0 ; i < size ; i++){
        int element;
        cin >> element;
        newNode = new Node(element);

        if( head == NULL){
            head = newNode;
        }
        else{
            temp = head;
           while( temp -> next != NULL){
            temp = temp -> next;
           }
            temp -> next = newNode;

        }
newNode -> next = NULL;
    }

    cout << "Printing the link list: ";
    printLinklist(head);

*/

    
     
}
// 1 2 3 4 5