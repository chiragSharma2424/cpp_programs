#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

Node *linkedList(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

void printLL(Node *head) {
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *deleteNode(Node *&head, Node *target) {
    // target node se ek node pehele aa jayege
    if(head == target) {
        head = head -> next;
        return head;
    }
    Node *temp = head;
    while(temp -> next != target) {
        temp = temp -> next;
    }
    temp -> next = temp -> next -> next;
    return head;
}

Node *deleteTargetVal(Node *head, int targetVal) {
    if(head -> data == targetVal) {
        head = head -> next;
        return head;
    }
    Node *temp = head;
    while(temp -> next -> data != targetVal) {
        temp = temp -> next;
    }
    temp -> next = temp -> next -> next;
    return head;
}
int main() {
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;
    e -> next = nullptr;

    Node *head = a;


    printLL(a);
    head = deleteNode(a, a);
    printLL(head);
    head = deleteTargetVal(a, 40);
    printLL(head);
    return 0;
}