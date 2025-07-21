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
    int ans = countSpaces("hello world from       coders");
    cout << ans << endl;
    return 0;
}