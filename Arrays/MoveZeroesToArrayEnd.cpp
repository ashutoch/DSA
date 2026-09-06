//! Program to move all zeroes in an array to the end of the array

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr){
    int n = arr.size();
    int lastPos = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            swap(arr[i], arr[lastPos]);
            lastPos--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    moveZeroes(arr);

    cout << "Array after moving zeroes to the end: ";
    for (auto x : arr) cout << x << " ";

    return 0;
}