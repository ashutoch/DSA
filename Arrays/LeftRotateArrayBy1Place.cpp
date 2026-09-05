//! To left rotate the array by 1 place

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

int rotate(vector<int>& a, int n) {
    int temp = a[0];
    // int i = 1;
    // while (i < n) {
    //     for (int j = 0; j < n; j++) {
    //         a[j] = a[i];
    //         i++;
    //         if (j == n-1) {
    //             a[j] = temp;
    //         }
    //     }
    // }

    for (int i = 1; i < n; i++) {
        a[i-1] = a[i];
    }
    a[n-1] = temp;

    cout << "Elements are left rotation are: ";
    for (auto k : a) cout << k << " ";

    return 0;
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
        rotate(a, n);
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}