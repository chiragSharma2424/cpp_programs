#include<iostream>
#include<vector>
using namespace std;
void reverseVector(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;
    for(int i = 0; start <= end; i++) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printVector(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr;
    arr.push_back(24);
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(7);
    printVector(arr);
    reverseVector(arr);
    printVector(arr);
    return 0;
}