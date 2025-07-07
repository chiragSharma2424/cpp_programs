#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this -> val = val;
        this -> next = nullptr;
    }
};

void displayLL(Node *head) {
    if(head == nullptr) return;
    cout << head -> val << " -> ";
    displayLL(head -> next);
}

void displayReverse(Node *head) {
    if(head == nullptr) return;
    displayReverse(head -> next);
    cout << head -> val << " <- ";
}

void insertAtEnd(Node *&head, int val) {
    Node *tail = head;
    while(tail != nullptr) tail = tail -> next;
    Node *temp = new Node(val);
    tail -> next = temp;
    tail = tail -> next;
}
int main() {
    // Node a(10);
    // Node b(20);
    // Node c(30);
    // Node d(40);

    // forming linked list
    // we can access any value in linked list using first pointer
    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = nullptr;
    // cout << (a.next->next)->val;

    
    
    // while attaching we dont have to put address
    // we know that a is pointer which stores a address and that node was created in dynamic memory in heap
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    Node *temp = a;

    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = nullptr;

    cout << a -> val << endl;

    while(temp != nullptr) {
        cout << temp -> val << " -> ";
        temp = temp -> next;
    }
    cout << endl;
    displayLL(a);
    insertAtEnd(a, 34);
    displayLL(temp);
    return 0;
}