#include<iostream>
using namespace std;
void inputArray(int arr[], int size) {
    cout << "Enter elements in array: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Priting the array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int largest(int arr[], int size) {
    int max = arr[0];
    for(int i = 0; i < size; i++) {
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    for(int i = 0; start <= end; i++) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}

void reverseManualSwap(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    for(int i = 0; start <= end; i++) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArray(arr, size);
}

int binSearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else if(key < arr[mid]) {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // declaring dynamic array, that's why using ppinter
    int *arr = new int[size];
    inputArray(arr, size);
    printArray(arr, size);
    int ans = largest(arr, size);
    cout << "Max element is: " << ans << endl;
    int ans2 = binSearch(arr, size, 24);
    cout << "Key present at index: " << ans2 << endl;
    return 0;
}