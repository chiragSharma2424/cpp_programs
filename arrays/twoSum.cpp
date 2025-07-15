#include<iostream>
#include<vector>
using namespace std;
void inputVector(vector<int> &arr, int &n) {
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printVector(vector<int> &arr, int n) {
    cout << "printing vector: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void twoSum(vector<int> &arr, int &n, int &target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}
int main() {
    int x;
    cout << "Enter target: ";
    cin >> x;
    vector<int> arr;
    int n;
    cout << "Enter array size: ";
    cin >> n;
    inputVector(arr, n);
    twoSum(arr, n, x);
    return 0;
}