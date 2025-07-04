#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    public:
    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

void print(Node *head) {
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

// we are using void function type so we have pass node as reference
void insertAtHead(Node *&head, int data) {
    Node *newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

// here we have node type of function we are returning a node
Node *insertAtHead2(Node *head, int data) {
    Node *newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}

int main() {
    // creating linked list manually

    Node *first = new Node(10);
    Node *head = first;
    Node *second = new Node(4);
    Node *third = new Node(3);
    Node *fourth = new Node(5);
    Node *fifth = new Node(24);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = nullptr;
    print(head);
    insertAtHead(head, 44);
    print(head);
    head = insertAtHead2(head, 56);
    print(head);
    return 0;
}