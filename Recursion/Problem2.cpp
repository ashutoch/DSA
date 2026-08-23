//! write a program to print numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if( i > n ) {
        return;
    }
    cout << i << endl;
    print(i+1, n);
}

int main() {
    int n;
    cout << "Enter value for n: ";
    cin >> n;
    cout << endl;
    print(1, n);

    return 0;
}
