//! Program for fibonacci series of n numbers

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 0 ) return 0;
    if (n == 1) {
        cout << "0" <<endl; return 0;
    }
    int next, first = 0, second = 1;

    cout << first << " " << second << " ";

    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << endl;
    fibonacci(n);
    return 0;
}