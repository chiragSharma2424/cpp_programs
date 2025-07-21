#include<iostream>
#include<vector>
using namespace std;
int mergeOp(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;
    int count = 0;

    while (start < end) {
        if(arr[start] == arr[end]) {
            start++;
            end--;
        } else if(arr[start] < arr[end]) {
            arr[start + 1] = arr[start + 1] + arr[start];
            start++;
            count++;
        } else {
            arr[end - 1] = arr[end - 1] + arr[end];
            end--;
            count++;
        }
    }
    return count;
}
int main() {
    vector<int> arr = {6, 1, 4, 3, 1, 7};
    int ans = mergeOp(arr);
    cout << "operations are: " << ans << endl;
    cout << "hello world";
    return 0;
}