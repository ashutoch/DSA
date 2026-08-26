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
    cout << "Enter number of elements in the array: ";
    cin >> n;

    // Hash Map to store: Key (Element) -> Value (Frequency)
    unordered_map<int, int> mp;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        
        // PRE-COMPUTATION PHASE:
        // Increment frequency of 'element' in O(1) average time
        mp[element]++; 
    }

    int q;
    cout << "\nEnter number of queries to search: ";
    cin >> q;

    cout << "Enter the " << q << " query numbers:\n";
    while (q--) {
        int number;
        cin >> number;

        // FETCHING PHASE:
        // Look up pre-calculated frequency in O(1) average time
        cout << "Frequency of " << number << " = " << mp[number] << endl;
    }

    return 0;
}