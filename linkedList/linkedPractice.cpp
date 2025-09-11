#include<iostream>
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

void print(Node *&head) {
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

Node *array2ll(int arr[], int size) {
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i = 1; i < size; i++) {
        temp -> next = new Node(arr[i]);
        temp = temp -> next;
    }
    return head;
}
int main () {
    int arr[5] = {24, 5, 9, 10, 3};
    Node *head = array2ll(arr, 5);
    print(head);
    return 0;
}