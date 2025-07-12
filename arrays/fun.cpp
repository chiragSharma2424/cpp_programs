#include<iostream>
using namespace std;
void display(int a[], int size) {
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void change(int b[]) {
    // this will change the value of array because array will pass by reference in functions
    b[0] = 24;
}

void printingArrayAddress(int arr[]) {
    cout << "priting address of array: " << arr << endl;
}
int main() {
    // int arr[] = {1, 2, 4, 7, 4};
    // int size = 5;
    // display(arr, 5);
    // change(arr);
    // display(arr, size);
    // printingArrayAddress(arr);



    int arr[5] = {24, 3, 5, 23, 9};
    int *ptr = arr;
    cout << ptr << " " << arr << endl;
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    // prints value
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    // print address
    for(int i = 0; i < 5; i++) {
        cout << ptr + i << " ";
    }
    cout << endl;
    // new wat of printing through pointer
    for(int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    *ptr = 5;
    return 0;
}