// //! Program to check if a string is palindrome or not

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;

//     cout << "Enter a string: ";
//     cin >> s;

//     for(char &c : s) c = tolower(c);

//     string rev = s;

//     reverse(rev.begin(), rev.end());

//     if (rev == s) cout << "The string is a palindrome." ;

//     else cout << "Not a palindrome";

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

// =============================================================
// HELPER: CLEAN & LOWERCASE THE STRING
// Removes spaces/punctuation and converts to lowercase
// Example: "A man, a plan!" -> "amanaplan"
// =============================================================
string cleanString(string s) {
    string cleaned = "";
    for (char c : s) {
        if (isalnum(c)) { // Checks if character is alphanumeric (A-Z, a-z, 0-9)
            cleaned += tolower(c);
        }
    }
    return cleaned;
}

// =============================================================
// METHOD 1: TWO-POINTER (BEST FOR INTERVIEWS - O(1) Space)
// =============================================================
bool isPalindromeTwoPointer(const string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Character mismatch -> Not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

// =============================================================
// METHOD 2: RECURSIVE (BEST FOR RECURSION PRACTICE)
// =============================================================
bool isPalindromeRecursive(const string& s, int left, int right) {
    // Base Case: If pointers cross or meet, all pairs matched
    if (left >= right) return true;

    // If characters at pointers don't match
    if (s[left] != s[right]) return false;

    // Recursive Call for inner substring
    return isPalindromeRecursive(s, left + 1, right - 1);
}

// =============================================================
// METHOD 3: STL SHORTCUT (FASTEST TO WRITE)
// =============================================================
bool isPalindromeSTL(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev; // True if original equals reversed
}

// =============================================================
// MAIN FUNCTION
// =============================================================
int main() {
    string input;
    cout << "Enter a string or sentence: ";
    getline(cin, input); // Reads full input line including spaces

    // Step 1: Clean and lowercase the string
    string s = cleanString(input);

    cout << "\nCleaned String: \"" << s << "\"\n";
    cout << "--------------------------------------\n";

    // Step 2: Test Method 1 (Two-Pointer)
    if (isPalindromeTwoPointer(s)) {
        cout << "1. Two-Pointer Method:  ✅ PALINDROME\n";
    } else {
        cout << "1. Two-Pointer Method:  ❌ NOT A PALINDROME\n";
    }

    // Step 3: Test Method 2 (Recursive)
    if (isPalindromeRecursive(s, 0, s.length() - 1)) {
        cout << "2. Recursive Method:    ✅ PALINDROME\n";
    } else {
        cout << "2. Recursive Method:    ❌ NOT A PALINDROME\n";
    }

    // Step 4: Test Method 3 (STL Shortcut)
    if (isPalindromeSTL(s)) {
        cout << "3. STL Shortcut Method: ✅ PALINDROME\n";
    } else {
        cout << "3. STL Shortcut Method: ❌ NOT A PALINDROME\n";
    }

    return 0;
}