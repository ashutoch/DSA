//! First select a pivot  then arrange the left and right side of the array in order

/*
HOW QUICK SORT WORKS (Divide & Conquer):

1. PICK A PIVOT: Choose an element (here, we pick the last element).
2. PARTITION: Move all elements SMALLER than the pivot to its LEFT, and all elements GREATER than the pivot to its RIGHT.
3. PLACE PIVOT: Place the pivot in its final, correct sorted position.
4. RECURSE: Repeat the same process for the LEFT and RIGHT sub-arrays.
*/

# include <bits/stdc++.h>
using namespace std;

int stepCount = 0; //* counter 

void printArray ( const vector<int>& arr ) {
    for (int x : arr ) cout << x << " ";
    cout << endl;
}

int partition ( vector<int>& arr, int low, int high ) {
    int pivot = arr[high];  //* selecting the last element as the pivot
    int i = low - 1;    //* index where to place the element smaller than the pivot

    //* rearranging elements around pivot
    for ( int j = low; j < high; j++ ) {
        if ( arr[j] < pivot ) {
            i++;
            swap ( arr[i], arr[j] );
        }
    }

    // putting pivot in its final correct position (index i + 1)
    swap ( arr[i + 1], arr[high] );
    int pIndex = i + 1;

    stepCount++;
    cout << "Step " << stepCount << "[Sub-array index " << low << " to " << high << "]:\n";
    cout << " - Pivot chosen: " << pivot << endl;
    cout << " - Pivot placed at index: " << pIndex << endl;
    cout << " - Array state now: ";
    printArray(arr);
    cout << "-------------------------------------------------" << endl;
    return pIndex;
}

void quickSort ( vector<int>& arr, int low, int high ) {
    if ( low < high ) {
        int pIndex = partition(arr, low, high); //* partitioning array around pivot

        quickSort(arr, low, pIndex-1); //* sorting the left half first (elements before the pivot)

        quickSort(arr, pIndex+1, high); //* sorting the right half (elemets after the pivot)
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: " << endl;

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\n---------------Start----------------\n";
    cout << "Initial Array: ";
    printArray(arr);
    cout << endl << endl;

    quickSort(arr, 0, n-1);

    cout << "\n---------------Final Result---------------\n";
    cout << "Sorted Array: ";
    printArray(arr);
    return 0;
}