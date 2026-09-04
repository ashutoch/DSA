//! program to find the largest element from an array

#include <bits/stdc++.h>
using namespace std;

int largest(vector<int>& arr, int n) {
    int maxEL = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxEL) {
            maxEL = arr[i];
        }
    }

    return maxEL;
}

int main() {
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n <<" elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //* One liner approach using STL
    cout << "Largest element: " << *max_element(arr.begin(), arr.end());

    // cout << "The largest element is: " << largest(arr, n);
    return 0;
}