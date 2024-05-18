#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Insert(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
    }
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

void Inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

// Helper function to calculate height and check if subtree is balanced
int checkHeight(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1; // Left subtree is not balanced

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1; // Right subtree is not balanced

    if (abs(leftHeight - rightHeight) > 1) {
        return -1; // Current node's subtrees are not balanced
    }

    return max(leftHeight, rightHeight) + 1;
}

// Function to check if tree is balanced
bool isBalanced(Node* root) {
    return checkHeight(root) != -1;
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

    if (isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}

/*
Enter the number of nodes: 7
Enter the nodes: 10 5 15 3 7 12 20


        10
       /  \
      5    15
     / \   / \
    3   7 12  20

*/
