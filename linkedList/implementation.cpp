#include<iostream>
using namespace std;
// in this file we are implementing class of linked list creating a user define data structure

// this is user define datatype
class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this -> val = val;
        this -> next = nullptr;
    }
};

// this is user define data structure
class LinkedList {
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList() {
        this -> head = nullptr;
        this -> tail = nullptr;
        this -> size = 0;
    }

    // we have to create functions

    void isertAtEnd(int val) {
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail -> next = temp;
            tail = temp;
        }
        size++;
    }

    // if there is no node size = 0 so temp he head hoga or tail hoga
    void insertAtHead(int val) {
       Node *temp = new Node(val);
       if(size == 0) head = tail = temp;
       else {
        temp -> next = head;
        head = temp;
       }
       size++;
    }

    void display() {
        Node *temp = head;
        while(temp != nullptr) {
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};


int main() {
    LinkedList ll;
    ll.isertAtEnd(10);
    ll.display();
    ll.isertAtEnd(20);
    ll.display();
    ll.isertAtEnd(30);
    ll.isertAtEnd(40);
    ll.display();
    cout << ll.size << endl;
    ll.insertAtHead(24);
    ll.display();
    return 0;
}