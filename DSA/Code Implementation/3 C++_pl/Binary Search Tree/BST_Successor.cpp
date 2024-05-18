
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

Node* inorder_successor(Node* root, Node* current) {
    Node* successor = NULL;

    while (root != NULL) {

        if (current->data < root->data) {
            successor = root;
            root = root->left;
        }
        else if (current->data > root->data) {
            root = root->right;
        }
        else {
            // Node with the same data as current
            if (root->right != NULL) {
                Node* temp = root->right;
                while (temp->left != NULL) {
                    temp = temp->left;
                }
                successor = temp;
            }
            break;
        }
    }
    return successor;
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
    int key;
    cout << "Enter the key to find the inorder successor: ";
    cin >> key;

    Node* target = new Node(key);  // create a temporary node to pass to inorder_successor
    Node* result = inorder_successor(root, target);

    if (result != NULL) {
        cout << "The successor of " << key << " is: " << result->data << endl;
    } else {
        cout << "There is no successor of " << key << endl;
    }

    delete target;  // clean up the temporary node
    return 0;

}

/*
// node number: 12
// binary nodes: 17 28 29 32 44 54 65 76 80 82 88 97
*/


