#include<iostream>
using namespace std;
void inputArray(int *arr, int size) {
    cout << "Enter elements in array" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int *arr, int size) {
    cout << "Printing the array" << endl;
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void printAllAddresses(int *arr, int size) {
    cout << "Printing all addresses of array" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr + i << " ";
    }
    cout << endl;
}

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum = arr[i] + sum;
    }
    return sum;
}

// not using INT_MIN basic approach
int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 0; i < size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int *arr, int size) {
    int min = arr[0];
    for(int i = 0; i < size; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    for(int i = 0; start <= end; i++) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // calling the reverse function
    printArray(arr, size);
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *arr = new int[size];
    inputArray(arr, size);
    printArray(arr, size);
    printAllAddresses(arr, size);
    int ans = sumOfArray(arr, size);
    cout << "sum of array is: " << ans << endl;
    int max = findMax(arr, size);
    cout << "Maximum element is: " << max << endl;
    int min = findMin(arr, size);
    cout << "minimum element is: " << min << endl;
    reverseArray(arr, size);
    return 0;
}