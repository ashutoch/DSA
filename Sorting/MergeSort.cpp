//! Divide the array elements into different parts then merge them in order 

# include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;   //* temp array to hold the merge values for limited time
    int left = low;     //* starting index of left half
    int right = mid + 1;    //* starting index of right half


    //* compare both the halves and push the smaller one
    while ( left <= mid && right <= high ) {
        if ( arr[left] <= arr[right] )  {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //* copy the remaining elements of left half
    while ( left <= mid ) {
        temp.push_back(arr[left]);
        left++;
    }

    //* copy the remaining elements of right half
    while ( right <= high ) {
        temp.push_back(arr[right]);
        right++;
    }

    //* copy sorted temp back into the original array
    for ( int i = low; i <= high; i++ ) {
        arr[i] = temp[i - low];
    }
}


void mergeSort(vector<int>& arr, int low, int high){
    if ( low >= high ) return; //* for when the array is already sorted

    int mid = low + (high - low) / 2; //* to avoid overflow

    mergeSort(arr, low, mid);

    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array: \n";
    for (int i : arr) cout << i << " ";

    return 0;
}