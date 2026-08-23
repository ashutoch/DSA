//! Program to reverse an array

#include <bits/stdc++.h>
using namespace std;

void reverseTwoPointer(vector<int>& y) {
    int left = 0;
    int right = y.size() - 1;
    
    while (left < right) {
        swap(y[left], y[right]);
        left++;
        right--;
    }
}

void reverseRecursion(vector<int>& x, int left, int right) {
    if (left >= right) return;

    swap(x[left], x[right]);
    reverseRecursion(x, left + 1, right - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // ✅ Allocate size 'n' AFTER reading 'n'
    vector<int> a(n); 

    cout << "Enter " << n << " array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b = a;  
    vector<int> c = a;  
    vector<int> d = a;  

    // 1. Two-Pointer
    reverseTwoPointer(b);
    cout << "\n1. Reverse Using 2 Pointer:\n";
    for (auto i : b) cout << i << " ";
    cout << endl << endl;

    // 2. Recursion
    reverseRecursion(c, 0, n - 1);
    cout << "2. Reverse Using Recursion:\n";
    for (auto i : c) cout << i << " ";
    cout << endl << endl;

    // 3. STL Shortcut
    reverse(d.begin(), d.end());
    cout << "3. Reverse Using STL:\n";
    for (auto i : d) cout << i << " ";
    cout << endl;

    return 0;
}