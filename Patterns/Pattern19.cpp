/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/ 

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {

        // Left stars (1 to i)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces in middle: 2 * (n - i)
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars (1 to i)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {

        // Left stars (i stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces in middle: 2 * (n - i)
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars (i stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}