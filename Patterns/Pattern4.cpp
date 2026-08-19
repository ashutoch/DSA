/*

*****
****
***
**
*

or 

12345
1234
123
12
1

*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            // cout << "* " << " ";
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}