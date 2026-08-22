//! Q. Given a number 'n' find out and return the number of digits present in 'n'

# include <bits/stdc++.h>
using namespace std;

int count(int n){
    int digit, num;
    while (n > 0){
        digit = n % 10;
        num++;
        n /= 10;
    }
    cout << "The number of digits is: " << num;
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    count(n);
    return 0;
}