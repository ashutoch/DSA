/*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/


#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){

        //* for space
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        //* for characters
        char ch = 'A';
        int breakpoint = ( 2 * i + 1) / 2;
        for (int k = 1; k <= 2*i+1; k++ ){
            cout << ch;
            if(k <= breakpoint) ch++;
            else ch--;
        }

        //* for space
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        print(n);
    }

    return 0;
}