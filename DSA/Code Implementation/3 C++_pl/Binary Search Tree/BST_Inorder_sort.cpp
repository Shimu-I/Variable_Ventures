//similar to insertion code

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

void Inorder( Node* root){
    if( root == NULL){
        return;
    }
    Inorder( root-> left);
    cout << root-> data << " ";
    Inorder( root -> right);
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
    cout << "In-order traversal: ";
    Inorder(root);
    cout << endl;


return 0;

}

/*
Enter the number of nodes: 7
Enter the nodes: 7


*/
