/*

*
**
***
****
*****

or

1
12
123
1234
12345

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            // cout << "* ";
            cout << j + 1;
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
        cout << endl << endl;
    }

    return 0;
}