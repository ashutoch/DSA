//! Removing duplicates from a sorted array

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

int duplicate(vector<int>& a, int n) {
    
    int i = 0;
        for (int j = 1; j < n; j++) {
            if(a[j] != a[i]) {
                a[i+1] = a[j];
                i++;
            }
        }
    return i+1;
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

    if (sorted(a, n)) {
        cout << "There are " << duplicate(a, n) << " unique elements in the array";
    } else {
        cout << "Array is not sorted! \nTry Again!!!" << endl;
    }

    return 0;
}