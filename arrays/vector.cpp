#include<iostream>
#include<vector>
using namespace std;
// we have pass address of containers while passing in functions, container like vector, pair etc
void printVector(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    // vector<int> v;
    // v.push_back(23);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(0);
    // printVector(v);
    // v.pop_back();
    // printVector(v);
    // cout << "Size of vector is: " << v.size() << endl;



    vector<int> v;
    v.push_back(3);
    v.push_back(8);
    v.push_back(7);
    v.push_back(4);
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    return 0;
}