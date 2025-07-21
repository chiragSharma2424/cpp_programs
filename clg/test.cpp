#include<iostream>
using namespace std;
int main() {
    int rnum;
    string name;
    cin >> rnum;
    fflush(stdin);
    getline(cin, name);
    cout << rnum;
    cout << name;
    return 0;
}