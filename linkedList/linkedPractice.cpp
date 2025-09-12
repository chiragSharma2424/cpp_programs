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

void print(Node *&head) {
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

void printReversell(Node *head) {
    Node *temp = head;
    while(temp -> next != nullptr) {
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

Node *vectorToLL(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}

int lengthOfLL(Node *head) {
    Node *temp = head;
    int len = 0;
    while(temp) {
        len++;
        temp = temp -> next;
    }
    return len;
}
int main () {
    // int arr[5] = {24, 5, 9, 10, 3};
    // Node *head = array2ll(arr, 5);
    // print(head);



    // vector<int> arr = {2, 4, 5, 6};
    // Node *y = new Node(arr[0]);
    // Node *z = new Node(arr[1]);
    // y -> next = z;
    // cout << y << endl; // it will print the memory location
    // cout << y -> data << endl;
    // cout << y -> next; //  it will print memory location for z



    vector<int> arr = {2, 5, 8, 7};
    Node *head = vectorToLL(arr);
    print(head);
    int ans = lengthOfLL(head);
    cout << ans;
    return 0;
}