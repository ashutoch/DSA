/*

****
*  *
*  *
****

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            // Print '*' if we are on the border (top, bottom, left, or right)
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } 
            // Otherwise print a space
            else {
                cout << " ";
            }
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