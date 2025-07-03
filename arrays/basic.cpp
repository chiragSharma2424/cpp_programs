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
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *arr = new int[size];
    inputArray(arr, size);
    printArray(arr, size);
    printAllAddresses(arr, size);
    int ans = sumOfArray(arr, size);
    cout << "sum of array is: " << ans;
    return 0;
}