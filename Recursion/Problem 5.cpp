//! Program to print sum of first n numbers

# include <bits/stdc++.h>
using namespace std;

// int print(int n) {
//     if (n == 0) return 0;

//     return n + print(n - 1);
// }

int print(int i, int sum) {
    if (i < 1) {
        cout << sum;
        return 0;
    }
    return print(i-1, sum + i);
}


int main() {
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    // cout << "sum is: " << print(n) << endl;
    print(n, sum);
    return 0;
}