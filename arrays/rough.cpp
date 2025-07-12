#include<iostream>
using namespace std;
int main() {
    // int arr[7];
    // cout << "Enter elements in array: " << endl;
    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }
    // // for(int i = 0; i < 5; i++) {
    // //     cout << arr[i] << " ";
    // // }

    // for(int i = 0; i < 5; i++) {
    //     if(arr[i] < 35) {
    //         cout << "roll no is: " << i << endl;
    //     }
    // }
    // cout << "size of array is: " << sizeof(arr)/sizeof(arr[0]);



    // memory allocation in array
    // they will have same address
    // we can use a pointer also to array
    // int *ptr = arr;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // cout << arr << endl;
    // cout << ptr << endl;




    // finding sum and product
    // int arr[5] = {2, 3, 1, 2, 4};
    // int sum = 0;
    // int product = 1;

    // for(int i = 0; i < 5; i++) {
    //     sum = sum + arr[i];
    //     product = product * arr[i];
    // }
    // cout << "sum is: " << sum << endl;
    // cout << "product is: " << product << endl;




    // we have search x element in array element is present or not
    // int arr[5] = {2, 3, 1, 2, 4};
    // int x;
    // cout << "enter element to search: ";
    // cin >> x;
    // for(int i = 0; i < 5; i++) {
    //     if(arr[i] == x) cout << "element is present" << endl;
    //     break;
    // }




    // int arr[5] = {3, 8, 24, 8, 0};
    // int max = arr[0];
    // for(int i = 0; i < 5; i++) {
    //     if(max < arr[i]) max = arr[i];
    // }
    // cout << "max number is: " << max << endl;


    // second largest
    // int arr[6] = {2, 4, 8, 24, 10, 3};
    // int max = arr[0];
    // //int smax = arr[0];

    // for(int i = 0; i < 6; i++) {
    //     if(max < arr[i]) max == arr[i];
    // }
    // cout << "Max element is: " << max << endl;

    // for(int i = 0; i < 6; i++) {
    //     if(arr[i] != max && smax < arr[i]) smax == arr[i];
    // }
    // cout << "second max is: " << smax << endl;




    int arr[6] = {2, 4, 8, 24, 10, 3};
    int max = arr[0];
    int smax = arr[0];
    for(int i = 0; i < 6; i++) {
        if(arr[i] > max) max = arr[i];
    }
    cout << "max element is: " << max << endl;
    
    for(int i = 0; i < 6; i++) {
        if(arr[i] > smax && arr[i] != max) smax = arr[i];
    }
    cout << "second max is: " << smax << endl;
    return 0;
}