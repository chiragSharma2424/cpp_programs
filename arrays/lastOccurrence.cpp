#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(24);
    v.push_back(8);
    v.push_back(4);
    v.push_back(56);
    v.push_back(24);
    v.push_back(34);
    v.push_back(0);

    // this is question we have to find last occurrence of element here we have two approaches
    // we can start loop from 0 to size and maintains a variable
    // good approach is we can start loop from last index and when we get element then break
    int x = 24;
    int idx = -1;
    // for(int i = 0; i < v.size(); i++) {
    //     if(v[i] == x) idx = i;
    // }
    // cout << "last occurrence of x: " << x << " is: " << idx << endl;

    for(int i = v.size() - 1; i >= 0; i--) {
        if(v[i] == x) {
            idx = i;
            break;
        }
    }
    cout << "last occurrence of x: " << x << " is: " << idx << endl;
    return 0;
}