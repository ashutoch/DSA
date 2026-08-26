//! Explaining and trying Hashing

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int hash[n+1] = {0};
//     for (int i = 0; i< n; i++) {
//         hash[arr[i]] += 1;
//     }


//     int x;
//     cout << "\nEnter the number of elements to be searched: ";
//     cin >> x;

//     cout << "Enter the numbers to be searched: ";
//     while(x--) {
//         int num;
//         cin >> num;
//         cout << hash[num] << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100], hash[100] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[arr[i]]++;
    }

    // searching for single element
    int num;
    cin >> num;
    cout << hash[num];

    return 0;
}