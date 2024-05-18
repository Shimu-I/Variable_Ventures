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

int height(Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

int main() {
    Node* root = NULL;
    int num, data;
    cout << "Enter the number of nodes: ";
    cin >> num;

    cout << endl;

    cout << "Enter the nodes: ";
    for (int i = 0; i < num; i++) {
        cin >> data;
        root = Insert(root, data);
    }

    cout << endl;
    cout << "In-order traversal: ";
    Inorder(root);
    cout << endl;

    int bstHeight = height(root);
    cout << "Height of the BST: " << bstHeight << endl;

    return 0;
}


/*
// node number: 12
// binary nodes: 17 28 29 32 44 54 65 76 80 82 88 97
*/
