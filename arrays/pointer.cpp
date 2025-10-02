#include<iostream>
using namespace std;
int main() {
    int a = 24;
    int *ptr = &a;
    cout << ptr << endl;
    ptr++; // incrementing
    cout << ptr << endl;
    return 0;
}