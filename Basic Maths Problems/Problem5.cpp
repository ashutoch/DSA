//! Write a program to find all the divisors of a number

#include <bits/stdc++.h>
using namespace std;

void divisor(int n){
    // for (int i = 1; i <= n; i++){
    //     if(n % i == 0) {
    //         cout << i << ", ";
    //     }
    // }

    for (int i = 1; i <= sqrt(n); i++) {
        if( n % i == 0) {
            cout << i << ", ";
            if ( (n / i) != i) {
                cout << (n / i) << ", ";
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    divisor(n);
    return 0;
}