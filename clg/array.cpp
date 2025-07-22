#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) return true;
    }
    return false;
}

// now we have to return index where key is present
int linearSearch2(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

void inputArray(int *arr, int size) {
    cout << "Enter elements in array: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Printing array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}


void shiftToRight(int arr[], int size, int ele) {
    for(int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = ele;
    size++;
}

void insertLast(int arr[], int size, int ele) {
    arr[size] = ele;
    size++;
}

bool pairSum(int arr[], int size, int target, int &idx1, int &idx2) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                idx1 = i;
                idx2 = j;
                return true;
            }
        }
    }
    return false;
}
int main() {
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int *arr = new int[size];
    inputArray(arr, size);
    printArray(arr, size);
    if(linearSearch(arr, size, 24)) {
        cout << "element is present";
    } else {
        cout << "element is not present";
    }
    int ans = linearSearch2(arr, size, 24);
    cout << "element is present at index: " << ans << endl;
    shiftToRight(arr, size, 24);
    printArray(arr, size);
    insertLast(arr, size, 100);
    printArray(arr, size);

    int index1, index2;
    if(pairSum(arr, size, 10, index1, index2)) {
        cout << "index are: " << index1 << " " << index2 << endl;
    } else {
        cout << "pair not found" << endl;
    }
    return 0;
}