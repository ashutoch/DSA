/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/ 

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    // ---------------- TOP HALF ----------------
    int space = 0;
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    // ---------------- BOTTOM HALF ----------------
    int iniS = 2 * n - 2; // Spaces start at 8 (for n = 5)
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < iniS; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        iniS -= 2;
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print(n);
    }

    return 0;
}