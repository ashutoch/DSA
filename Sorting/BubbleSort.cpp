//! select a maximum and swap its position with the last or the appropriate postion


#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

/*
  ===================================================================
  BUBBLE SORT
  ===================================================================

  IDEA:
  - Repeatedly compare adjacent elements and swap if out of order.
  - After every full pass, the largest remaining element "bubbles"
    to its correct position at the end.

  TIME COMPLEXITY:
  - Best Case    : O(N)     → already sorted (with optimization flag)
  - Average Case : O(N²)
  - Worst Case   : O(N²)    → reverse sorted

  SPACE COMPLEXITY: O(1)  → In-place sorting (no extra array)

  STABLE?  Yes (equal elements keep their relative order)
  ===================================================================
*/

// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();

    // Outer loop = number of passes (0 to n-2)
//     for (int i = 0; i < n - 1; i++) {

        // Optimization flag: if no swaps happen in a pass → array is sorted
//         bool swapped = false;

        // Inner loop = compare adjacent pairs
        // After i passes, last i elements are already in correct place
        // so we only go till (n - i - 2)
//         for (int j = 0; j < n - i - 1; j++) {

            // If current element is greater than next → swap
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }

        // If no swaps occurred → array is already sorted → early exit
//         if (!swapped) break;
//     }
// }

// Helper to print the array
// void printArray(const vector<int>& arr) {
//     for (int x : arr) cout << x << " ";
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "\nOriginal Array: ";
//     printArray(arr);

//     bubbleSort(arr);

//     cout << "Sorted Array:   ";
//     printArray(arr);

//     return 0;
// }