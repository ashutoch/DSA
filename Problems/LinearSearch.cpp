//! Linear Search Problem

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int x) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
        else return -1;
    }
    return 0;
}


int main() {
    int n;
    cout << "Enter the number of elements for the array: "; 
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i< n; i++) cin >> arr[i];

    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    cout << "The element is at " << linearSearch(arr, x) << " position";
}