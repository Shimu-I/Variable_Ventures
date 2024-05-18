
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node( int data ){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


Node* Insert( Node* root, int data){
    if( root == NULL){
        root = new Node( data);
    }
    else if( data <= root -> data){
        root -> left = Insert( root -> left, data);
    }
    else {
        root -> right = Insert( root -> right, data);
    }
    return root;
}


Node* Search(Node* root, int key){
    if( root == NULL){
        return NULL;
    }
    if( root -> data == key){
        return root;
    }
    else if( root-> data > key){
        return Search( root-> left, key);
    }
    else{
        return Search( root-> right, key);
    }
}


int main(){
    Node* root = NULL;
    int num, data;
    cout << "Enter the number of nodes: ";
    cin >> num;

    cout << endl;

    cout << "Enter the nodes: ";
    for( int i = 0; i < num ; i++){
        cin >> data;
        root = Insert( root, data);
    }
cout << endl;

int key;
cout << "Enter a number you want to search in the tree: ";
cin >> key;
cout << endl;

Node* result = Search(root, key) ;
if(result != NULL){
    cout << "Found [ " << key << " ] in the tree." << endl;
}
else{
    cout << key << " is not in the tree." << endl;
}

return 0;

}

/*
// node number: 12
// binary nodes: 17 28 29 32 44 54 65 76 80 82 88 97
*/
