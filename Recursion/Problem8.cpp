//! Program to check if a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    for(char &c : s) c = tolower(c);
    
    string rev = s;

    reverse(rev.begin(), rev.end());

    if (rev == s) cout << "The string is a palindrome." ;

    else cout << "Not a palindrome";

    return 0;
}