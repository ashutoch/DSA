//! Write a program to find the GCD of 2 numbers

#include <bits/stdc++.h>
using namespace std;

void gcd(int x, int y) {
    // int gcd = 1;

    // for (int i = 1; i <= min(x, y); i++) {
    //     if (x % i == 0 && y % i == 0) {
    //         gcd = i;
    //     }
    // }

    int i;
    for (i = min(x, y); i <= 1; i-- ) {
        if(x % i == 0 && y % i == 0) {
            // cout << i;
            break;
        }
    }

    cout << i;

    // cout << gcd;
}

int main() {
    int n, m;
    cin >> n >> m;
    gcd(n, m);
    return 0;
}