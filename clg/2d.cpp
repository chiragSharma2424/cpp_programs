#include<iostream>
#include<vector>
using namespace std;
void inputMatrix(int arr[][4]) {

}

bool isPresent(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) return true;
    }
    return false;
}

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        
    }
}

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    for(int i = 0; start <= end; i++) {
        if(arr[mid] == target) {
            return mid;
        } else if(target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;  
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << *arr + i << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size, int start, int end) {
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateByK(int arr[], int size, int k) {
    reverse(arr, size, 0, k - 1);
    reverse(arr, size, k, size - 1);
    reverse(arr, size, 0, size - 1);
}

vector<int> leader(vector<int> arr, int n) {
    vector<int> finalArr;

}
int main() {
    // int key;
    // cout << "Enter key: ";
    // cin >> key;
    // int arr[10] = {10 ,20, 30, 40, 50, 40, 70, 40, 90, 100};

    // cout << isPresent(arr, 10, key);


    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotateByK(arr, 6, k);
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}