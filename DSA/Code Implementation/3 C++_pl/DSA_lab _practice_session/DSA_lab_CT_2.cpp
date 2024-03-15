#include <iostream>
using namespace std;



//creating Node template
class Node{
public:
int data;
Node* next;

//constructor
Node(int data){
   this -> data = data;
   this -> next = NULL;
}
};



//for printing the link list we are traversing the list
void printLinkList(Node* &head){

      Node* temp = head;
      while(temp != NULL){

       cout << temp -> data << " " ;
        temp = temp -> next;

}
cout << endl;
}



int nodeAdd(Node* &head, int d){
         Node* temp = new Node(d);
           temp -> next =  head;
          head = temp;
         return 0;
        
}



int newNodeFunction(Node* &head){
        Node* temp = head;
        Node* max = head;
       
        while(( temp != NULL) && (temp -> next)  != NULL){
            if((temp -> data) > (temp -> next -> data)){
                max = temp;
                temp = temp -> next;
            }else{
                max = temp -> next;
                temp = temp -> next;
        }
        }

        
        swap(head -> next ->data, max-> data);
// error
}


int main(){
   Node* head = NULL;
   int num;
    cout << "Enter the number of elements: " ;
     cin >> num;

for( int i = 0 ; i < num ; i++){
    int elements;
    cin >> elements;
    nodeAdd(head, elements);
}

printLinkList(head);

newNodeFunction(head);
printLinkList(head);

}