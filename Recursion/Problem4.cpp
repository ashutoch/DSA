//! Program to print number from 1 to n without using (i+1) / using only backtracking

#include <bits/stdc++.h>
using namespace std;

void print (int i) {
    if (i < 1) return;

    print (i-1);
    cout << i << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    print(n);
    return 0;
}