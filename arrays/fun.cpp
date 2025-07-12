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
int main() {
    int arr[] = {1, 2, 4, 7, 4};
    int size = 5;
    display(arr, 5);
    change(arr);
    display(arr, size);
    return 0;
}