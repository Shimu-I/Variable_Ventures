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

Node* FindMin(Node* root){
    while(root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* FindMax(Node* root){
    while(root->right != NULL){
        root = root->right;
    }
    return root;
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

    Node* minNode = FindMin(root);
    cout << "Minimum element: " << minNode->data << endl;

    Node* maxNode = FindMax(root);
    cout << "Maximum element: " << maxNode->data << endl;

    return 0;
}


/*
// node number: 12
// binary nodes: 17 28 29 32 44 54 65 76 80 82 88 97
*/
