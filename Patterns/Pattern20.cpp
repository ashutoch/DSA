/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/


#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    int size = 2 * n - 1; // Grid size (e.g., for n = 4, size = 7)

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            // Distance of current cell (i, j) from the 4 edges
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            // Find the minimum distance to any border
            int minDist = min({top, bottom, left, right});

            // The value at cell (i, j) is n minus the minimum distance
            cout << (n - minDist) << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}