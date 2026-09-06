//! Moving all non-zero numbers to the end of an array

#include <bits/stdc++.h>
using namespace std;

void moveNonZero(vector<int>& arr) {
    int n = arr.size();
    int lastpos = n - 1;
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] != 0) {
            swap(arr[i], arr[lastpos]);
            lastpos--;
        }
    }
}


int main() {
    int n;

    cout << "Enter the number of elements to enter: ";
    cin >> n; 

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    moveNonZero(arr);

    cout << "Array after moving non-zeroes to the end:\n";
    for (auto x : arr) cout << x << " ";
    return 0;
}