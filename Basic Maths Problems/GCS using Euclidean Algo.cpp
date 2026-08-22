//! WAP for GCD of 2 numbers using euclidean algorithm

#include <bits/stdc++.h>
using namespace std;

// =============================================================
// METHOD 1: RECURSIVE (Most elegant)
// Base case: when b == 0, answer is a
// =============================================================
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdRecursive(b, a % b);
}

// =============================================================
// METHOD 2: ITERATIVE (No recursion, easy to trace)
// Just keep swapping until b becomes 0
// =============================================================
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;   // save b
        b = a % b;      // new b = a % b
        a = temp;       // new a = old b
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD (recursive) = " << gcdRecursive(a, b) << endl;
    cout << "GCD (iterative) = " << gcdIterative(a, b) << endl;

    return 0;
}