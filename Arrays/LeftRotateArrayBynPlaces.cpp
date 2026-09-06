//! Left rotate an array by 'n' places

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr, int a) {
    int n = arr.size();

    a = a % n; //* for when a >= n

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + a + 1);
    reverse(arr.begin() + a + 1, arr.end());

    for (auto i : arr) cout << i << " ";
}


int main() {
    int n;

    cout << "Enter the number of elements to enter: ";
    cin >> n; 

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int a;
    cout << "Enter the number of elements that you want to left rotate: ";
    cin >> a;

    rotate(arr, a);

    return 0;
}