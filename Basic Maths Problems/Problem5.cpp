//! Write a program to find all the divisors of a number

#include <bits/stdc++.h>
using namespace std;

void divisor(int n){
    // for (int i = 1; i <= n; i++){
    //     if(n % i == 0) {
    //         cout << i << ", ";
    //     }
    // }

    vector<int> list;
    for (int i = 1; i <= sqrt(n); i++) {
        if( n % i == 0) {
            list.push_back(i);
            if ( (n / i) != i) {
                list.push_back(n / i);
            }
        }
    }
    sort(list.begin(), list.end());
    for (auto j : list) cout << j << ", ";
}

int main(){
    int n;
    cin >> n;
    divisor(n);
    return 0;
}