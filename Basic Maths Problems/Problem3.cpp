//! Q. Write a program to dertermine if a number is palindrome or not. Print true if it is a palindrome, otherwise false.

#include <bits/stdc++.h>
using namespace std;

void palindrome(int n){
    int temp = n;
    int rev = 0, ld;
    while (n != 0){
        ld = n % 10;
        n /= 10;
        rev = (rev * 10) + ld;
    }

    if (rev == temp) cout << "It's a palindrome";

    else cout << "It's not a palindrome";
}

int main() {
    int n;
    cin >> n;
    palindrome(n);
    return 0;
}