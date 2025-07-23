#include<iostream>
#include<vector>
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

void maxi(int arr[], int size) {
    int freq[10] = {0};

    for(int i = 0; i < size; i++) {
        int num = arr[i];
        while(num > 0) {
            freq[num % 10]++;
            num = num / 10;
        }
    }

    for(int i = 9; i >= 0; i--) {
        while(freq[i] > 0) {
            cout << i;
            freq[i]--;
        }
    }
}
int main() {
    // int size;
    // cout << "enter size of array: ";
    // cin >> size;
    // int *arr = new int[size];
    // inputArray(arr, size);
    // printArray(arr, size);
    // if(linearSearch(arr, size, 24)) {
    //     cout << "element is present";
    // } else {
    //     cout << "element is not present";
    // }
    // int ans = linearSearch2(arr, size, 24);
    // cout << "element is present at index: " << ans << endl;
    // shiftToRight(arr, size, 24);
    // printArray(arr, size);
    // insertLast(arr, size, 100);
    // printArray(arr, size);

    // int index1, index2;
    // if(pairSum(arr, size, 10, index1, index2)) {
    //     cout << "index are: " << index1 << " " << index2 << endl;
    // } else {
    //     cout << "pair not found" << endl;
    // }



    int arr[10] = {78, 92, 43, 9, 10 };
    maxi(arr, 10);
    return 0;
}