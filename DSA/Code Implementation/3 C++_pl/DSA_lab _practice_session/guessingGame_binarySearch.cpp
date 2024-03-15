#include <iostream>
using namespace std;


//guess game using array

/*

int binarySearch(int arr[], int n, int num){

    int s = 0;
    int e = n-1;
    int mid = (s + (e - s)/2);

    while(s <= e){
        if( arr[mid] == num){
            cout << "You guess the pass correct!! number: " <<  arr[mid] << endl;
            break;
        }
        if( arr[mid] < num){
            s = mid +1;
            cout << "You guessed number is smaller! number: " << arr[mid] << endl;
        }
        if( arr[mid] > num){
            e = mid - 1;
            cout << "You guessed number is bigger! number:" << arr[mid] << endl;
        }
        mid = (s + (e - s)/2);
    }

return 1;
}

int main(){

    long int pass = 12356;

    int arr[7] = {0};
    cout << "Enter the element: ";

    for(int i = 0 ; i < 7 ; i++){
      cin >> arr[i];
    }
   

    binarySearch(arr, 7, pass);
   
}


*/

//1 66 69 83 89  90 12356


//guess game using linklist

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};




int binarySearch(Node* &head, int num){

    Node* s = head;
  

    while(head != NULL){
        if( (s -> data) == num){
            cout << "You guess the pass correct!! number: " <<  s -> data << endl;
            break;
        }
        else if( (s -> data) < num){
            s = s -> next;
            
            cout << "You guessed number is smaller! number: " << s -> data << endl;
        }
        else{
            cout << "You guessed number is bigger! number:" << s -> data << endl;
        }
        return 0;
    }

return 0;
}



int middle_linklist(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count /2;
}

void insertNode(Node* &head, int data){
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}

int main(){

    long int pass = 12356;

    Node* head;
    
    cout << "Enter the number of element: ";
    int number  ;
    cin >> number;

    for(int i = 0 ; i < number ; i++){
        int elements;
      cin >> elements;
      insertNode(head, elements);
    }
   

    binarySearch( head, pass);
   
}
