//! Program to print sum of first n numbers

# include <bits/stdc++.h>
using namespace std;

int print(int n) {
    if (n == 0) return 0;

    return n + print(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    cout << "sum is: " << print(n) << endl;

    return 0;
}