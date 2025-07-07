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
    return 0;
}