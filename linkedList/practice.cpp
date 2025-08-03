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

Node *array2ll(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i = 1; i < arr.size(); i++) {
        temp -> next = new Node(arr[i]);
        temp = temp -> next;
    }
    return head;
}

Node *array2ll2(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i = 1; i < arr.size(); i++) {
       Node *newNode = new Node(arr[i]);
       mover -> next = newNode;
       mover = mover -> next;
    }
    return head;
}

Node *insertAtHead(Node *head, int data) {
    Node *newHead = new Node(data);
    newHead -> next = head;
    return newHead;
}

void printLL(Node *head) {
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    vector<int> arr = {24, 4, 5, 9, 3};
    Node *head = array2ll2(arr);
    printLL(head);
    head = insertAtHead(head, 2004);
    printLL(head);
    return 0;
}