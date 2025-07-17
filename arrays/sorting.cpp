#include<iostream>
#include<vector>
using namespace std;
// this is basic sorting
void sorting(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

// this function will sort 0's and 1's
void sort01(vector<int> &v) {
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) noz++;
        else noo++;
    }

    for(int i = 0; i < n; i++) {
        if(i < noz) v[i] = 0;
        else v[i] = 1;
    }
}

void sort01twoPointer(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;

    for(int i = 0; start <= end; i++) {
        if(arr[start] == 0) start++;
        if(arr[end] == 1) end--;
        if(arr[start == 1] && arr[end] == 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main() {
    // vector<int> v = {4, 1, 7, 2, 3};
    // cout << "printing the vector: " << endl;
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // sorting(v);
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }


    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort01twoPointer(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}