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

void printLL(Node *head) {
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    vector<int> arr = {24, 4, 5, 9, 0};
    Node *head = array2ll(arr);
    printLL(head);
    return 0;
}