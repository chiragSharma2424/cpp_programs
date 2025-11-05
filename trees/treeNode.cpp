#include<iostream>
using namespace std;
// this is tree node
class Node {
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this -> val = val;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};
// this is preorder
// left ko phele call jayega
void displayTree(Node *root) {
    if(root == nullptr) return;
    cout << root -> val << " ";
    displayTree(root -> left); // left recursion
    displayTree(root -> right); // right recursion
}

// right ko phele call laga di
void displayTree2(Node *root) {
    if(root == nullptr) return;
    cout << root -> val << " ";
    displayTree2(root -> right);
    displayTree2(root -> left);
}

int sum(Node *root) {
    if(root == nullptr) return 0;
    int ans = root -> val + sum(root -> left) + sum(root -> right);
    return ans;
}

int sizeOfTree(Node *root) {
    if(root == nullptr) return 0;
    return 
}
int main() {
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    // manually builded the tree
    a -> left = b;
    a -> right = c;
    
    b -> left = d;
    b -> right = e;

    c -> left = f;
    c -> right = g;

    displayTree(a);
    cout << endl;
    displayTree2(a);
    cout << endl;
    cout << sum(a);
    return 0;
}