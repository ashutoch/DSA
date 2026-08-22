#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int temp = n;
    
    // Step 1: Count total digits
    int count = to_string(n).length(); 

    int sum = 0;
    while (temp != 0) {
        int ld = temp % 10;
        sum += round(pow(ld, count)); // Raise each digit to power of 'count'
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int n;
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is NOT an Armstrong number" << endl;
    }
    return 0;
}