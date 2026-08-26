//! Counting the number of characters

#include <bits/stdc++.h>
using namespace std;

int hashing(char c, string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) count++;
    }
    cout << "The number of times \"" << c << "\" occurs is: " << count;
    return 0;
}


int main() {
    string s;
    cin >> s;

    char c;
    cout << "Enter the character to be searched for number of occurences: ";
    cin >> c;

    hashing(c, s);
    return 0;
}