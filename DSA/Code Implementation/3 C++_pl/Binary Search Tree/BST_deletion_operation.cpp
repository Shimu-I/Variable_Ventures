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

Node* FindMin(Node*  root){
    while( root -> left != NULL){
        root =  root -> left;
    }
        return root;
}

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

Node* Delete( Node* root, int data){
    if( root == NULL){
        return root;
    }
    else if( data < root -> data){
        root -> left = Delete( root -> left, data);
    }
    else if( data > root -> data){
        root -> right = Delete( root -> right, data);
    }
    else{
            // Case no 1: No Child
            if( root -> left == NULL &&  root -> right == NULL){
                delete root;
                root = NULL;
            }
            // Case no 2: One Child
            else if( root -> left == NULL){
                Node* temp =  root;
                root = root -> right;
                delete temp;
            }

            else if( root -> right == NULL ){
                Node* temp =  root;
                root = root -> left;
                delete temp;
            }
            // Case no 3: two Childern
            else{
                Node* temp = FindMin( root -> right); // Use the in-order successor
                root -> data = temp -> data;
                root -> right = Delete( root-> right, temp->  data);
            }
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
    int key;
    cout << "Enter the key you want to delete: ";
    cin >> key;
    cout << endl;

    root = Delete( root, key);

    cout << "After deletion: ";
    Inorder(root);
    cout << endl;


return 0;

}

/*
// node number: 12
// binary nodes: 17 28 29 32 44 54 65 76 80 82 88 97
*/

/*
       50
      /  \
    30    70
   / \   / \
  20  40 60 80

Let�s say we want to delete the node with data = 30.

data = 30 is less than root->data (50), so we move to the left subtree.
We find data = 30 in the left subtree.
Since 30 has two children (20 and 40), we find the minimum value node in the right subtree (40).
Replace 30 with 40 and delete the node with data = 40.
The updated tree becomes:


*/
