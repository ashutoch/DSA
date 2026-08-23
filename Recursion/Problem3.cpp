//! Program to print numbers from n to 1

#include <bits/stdc++.h>
using namespace std;

void print(int n, int i)  {
    if (n >= i) {
        cout << n << endl;
        print(n - 1, i);
    }
    else return;
}

int main() {
    int n;
    cout << "Enter the value for n: ";
    cin >> n;
    cout << endl;
    print(n, 1);
    return 0;
}