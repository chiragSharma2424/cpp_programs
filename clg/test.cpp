#include<iostream>
#include<string>
using namespace std;
int countSpaces(string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ' && str[i+1] != ' ') count++;
    }
    return count;
}

int main() {
    // int rnum;
    // string name;
    // cin >> rnum;
    // fflush(stdin);
    // getline(cin, name);
    // cout << rnum;
    // cout << name;
    // int ans = countSpaces("hello world from       coders");
    // cout << ans << endl;


    // int num = 78 / 10;
    // cout << num << endl;

    // int num2 = 24 / 10;
    // cout << num2;


    // int num = 56;
    // int ans = num % 10;
    // int ans2 = num / 10;
    // cout << num << endl;
    // cout << ans << endl;
    // cout << ans2 << endl;

    float num = 78;
    while(num > 0) {
       num = num / 10;
    }
    cout << num << endl;

}