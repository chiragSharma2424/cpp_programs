#include<iostream>
using namespace std;
void printSubArray(int arr[], int size) {
    for(int start = 0; start < size; start++) {
        for(int end = start; end < size; end++) {
            // cout << "(" << start << "," << end << ") ";
            for(int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    printSubArray(arr ,5);
    return 0;
}