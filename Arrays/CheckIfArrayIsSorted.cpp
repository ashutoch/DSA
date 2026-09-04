//! To check if the array is sorted or not

#include <bits/stdc++.h>
using namespace std;

int sorted(vector<int>& a, int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]){
            // return true;
        }

        else return false;
    }
    return true;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Is the array sorted? ";

    if (sorted(a, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}