//! Write a program to find the GCD of 2 numbers

#include <bits/stdc++.h>
using namespace std;

void gcd(int x, int y) {
    // vector<int> a,b;
    int gcd = 1;

    for (int i = 1; i <= min(x, y); i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }

    cout << gcd;
}

int main() {
    int n, m;
    cin >> n >> m;
    gcd(n, m);
    return 0;
}