//! Write a program to to check if a number is prime or not

#include <bits/stdc++.h>
using namespace std;

void prime(int n){
    int count = 1;
    for (int i = 2; i < n; i++) {
        if ( n % i == 0) {
            count++;
        }
    }

    if (count > 1) {
        cout << "Its not a prime number";
    }
    else cout << "Its a prime number";
}

int main() {
    int n;
    cin >> n;
    prime(n);
    return 0;
}