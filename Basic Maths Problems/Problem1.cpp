//! Q. Given a number 'n' find out and return the number of digits present in 'n'

# include <bits/stdc++.h>
using namespace std;

int count(int n){
    int c = 0;

    while (n > 0){
        // int digit = n % 10;
        n /= 10;
        c += 1;
    }

    cout << "The number of digits is: " << c;
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    count(n);
    return 0;
}