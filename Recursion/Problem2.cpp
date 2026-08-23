//! write a program to print numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main() {
    int n;
    cout << "Enter value for n: ";
    cin >> n;
    cout << endl;
    print(n);

    return 0;
}
