//! Q. Write a program to print the reverse of a number 'n'

#include <bits/stdc++.h>
using namespace std;

int rev(int n){
    int num, revNum = 0;
    cout << "Reverse Order: ";
    while(n != 0){
        num = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + num;
    }
    cout << revNum;
    return 0;
}

int main(){
    int n;
    cin >> n;
    rev(n);
    return 0;
}