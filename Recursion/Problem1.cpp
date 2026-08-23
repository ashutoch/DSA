//! Writ ea program to print name n times

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n, string s) {
    if (i > n){
        return;
    }

    cout << i << ". " << s << endl;
    print(i + 1, n, s);
}

int main() {
    int n;
    string s;
    cout << "Enter the number of times you want to print: ";
    cin >> n;
    cout << "Enter the name: " << endl;
    cin >> s;
    print (1, n, s);
    return 0;
}