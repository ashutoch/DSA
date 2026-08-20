#include <bits/stdc++.h>
using namespace std;

void explainPairs(){
    pair<int, int> p = {1, 3}; //! to make a single variable hold 2 values we use pairs
    //* pair<datatpe, datatype> variableName = {v1, v2}

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {2, 3}};

    cout << q.first << " " << q.second.second << " " << q.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

int main(){
    explainPairs();
    return 0;
}