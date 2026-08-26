//! How many times does a number comes in an array

#include <bits/stdc++.h>
using namespace std;

int counterTraditional(int num, const vector<int>& arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] == num) count++;
    }
    return count;
}


int main() {
    int num, n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    vector<int> arr(n);

    cout << endl << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << endl << "Enter the number to count the number of occurences: ";
    cin >> num;

    int ans = counterTraditional(num, arr);

    cout << endl << "The number " << num << " occurs " << ans << " times." << endl;

    //* STL shortcut
    cout << "\n\nUsing STL";
    int ansSTL = count(arr.begin(), arr.end(), num);
    cout << "The number " << num << " occurs " << ansSTL << " times." << endl;

    return 0;
}