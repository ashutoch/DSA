/*

1      1 
12    21
123  321
12344321

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int space = 2 * (n - 1);
    for (int i = 1 ; i <= n; i++){

        //* for numbers
        for (int j = 1; j <=i; j++){
            cout << j;
        }

        for (int k = 1; k <= space; k++){
            cout << " ";
        }

        //* for numbers
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
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