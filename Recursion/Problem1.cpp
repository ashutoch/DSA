//! Writ ea program to print name n times

#include <bits/stdc++.h>
using namespace std;

void print(string s) {
    cout << s << endl;
}

int main() {
    int n;
    string s;
    cout << "Enter the number of times you want to print: ";
    cin >> n;
    cout << "Enter the name: " << endl;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        print(s);
    }
    return 0;
}