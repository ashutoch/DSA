//! Program to find the second largest element

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr, int n) {
    int largest = arr[0], secondlarge = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if(arr[i] > secondlarge && arr[i] != largest) {
            secondlarge = arr[i];
        }
    }

    return secondlarge;
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

    cout << "The second largest element is: " << secondLargest(arr, n);
    return 0;
}