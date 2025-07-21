#include<iostream>
using namespace std;
int secondLargest(int &n) {

}

int fact(int num) {
    if(num == 0) return 1;
    int ans = num * fact(num - 1);
    return ans;
}

int factorial(int num) {
    int ans = 1;
    for(int i = 1; i <= num; i++){
        ans = ans * i;
    }
    return ans;
}


int main() {
    // int ans = 10 % 15;
    // cout << ans << endl;

    //    int largest = 0;
    //    int sLargest = 0;
    //    int min = 0;

    // int n;
    // cin>>n;
    
    // while(n != -1) {
    //     if(n>largest) {
    //         sLargest = largest;
    //         largest = n;
    //     }
    //     else if(n < largest && n > sLargest) {
    //         sLargest = n;
    //         }
    //         cin >>n;
    // }
    // cout << sLargest << endl;

    // int n;
    // cin >> n;
    // int ans = factorial(n);
    // cout << ans << endl;


    int arr[5];
    int *ptr = arr;
    cout << arr << " " << ptr << endl;



    // zero matrix 
    // unit matrix implement
    // daigonal matrix
    // taringular matrix
    // tri daigonal matrix
    // sparese matrix
    // upper and lower traingular matrix
    return 0;
}