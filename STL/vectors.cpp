#include <bits/stdc++.h>
using namespace std;

void explainVectors() {
    // =============================================================
    // 1. BASICS: WHAT IS A VECTOR?
    // =============================================================
    vector<int> v; // Empty vector {}

    v.push_back(1);    // v = {1}
    v.emplace_back(2); // v = {1, 2}

    cout << "1. v after push_back & emplace_back: ";
    for (int x : v) cout << x << " ";
    cout << "\n\n";


    // =============================================================
    // 2. VECTOR OF PAIRS
    // =============================================================
    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); 
    vec.emplace_back(3, 4); 

    cout << "2. Vector of pairs elements: ";
    cout << "{" << vec[0].first << ", " << vec[0].second << "}, {" << vec[1].first << ", " << vec[1].second << "}\n\n";


    // =============================================================
    // 3. INITIALIZING VECTORS WITH SIZE AND DEFAULT VALUES
    // =============================================================
    vector<int> v3(5, 100); // Size 5, all elements = 100
    cout << "3. v3 (5 elements of 100): ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    vector<int> v5(5); // Size 5, initialized with 0
    cout << "   v5 (5 elements of 0): ";
    for (int x : v5) cout << x << " ";
    cout << endl;

    vector<int> v1(5, 20); 
    vector<int> v2(v1); // Copies v1 into v2 
    cout << "   v2 (copy of v1): ";
    for (int x : v2) cout << x << " ";
    cout << "\n\n";


    // =============================================================
    // 4. ITERATORS: UNDERSTANDING BEGIN, END, RBEGIN, REND
    // =============================================================
    /*
        VISUALIZING ITERATORS:
        An iterator is just a pointer pointing to a memory address.

        Memory map for nums = {10, 20, 30, 40, 50}:
        
        [out of bounds]   [10]   [20]   [30]   [40]   [50]   [out of bounds]
              ^            ^                           ^            ^
          rend()        begin()                     rbegin()      end()
    */
    vector<int> nums = {10, 20, 30, 40, 50};
    cout << "4. ITERATORS DEMONSTRATION on {10, 20, 30, 40, 50}\n";

    // 1. begin(): Points to the FIRST element
    vector<int>::iterator it1 = nums.begin(); 
    cout << "   nums.begin() points to: " << *(it1) << endl; 

    // 2. end(): Points to the memory address RIGHT AFTER the last element.
    // To get the actual last element, you must do: end() - 1
    vector<int>::iterator it2 = nums.end(); 
    cout << "   nums.end() - 1 points to: " << *(it2 - 1) << endl; 

    // 3. rbegin() [Reverse Begin]: Points directly to the LAST element.
    // As you increment (rbegin++), it moves BACKWARDS through the vector.
    vector<int>::reverse_iterator it3 = nums.rbegin();
    cout << "   nums.rbegin() points to: " << *(it3) << endl;

    // 4. rend() [Reverse End]: Points to the address RIGHT BEFORE the first element.
    vector<int>::reverse_iterator it4 = nums.rend();
    cout << "   nums.rend() - 1 points to: " << *(it4 - 1) << "\n\n";


    // =============================================================
    // 5. WAYS TO LOOP AND PRINT VECTORS
    // =============================================================
    cout << "5. PRINTING METHODS:\n";

    // Method A: Array Style (using index)
    cout << "   Array style (i < size): ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Method B: Standard Iterator Loop
    // "auto" automatically figures out it is a vector<int>::iterator
    cout << "   Standard Iterator loop: ";
    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Method C: Reverse Iterator Loop (Prints vector backwards!)
    cout << "   Reverse Iterator loop:  ";
    for (auto it = nums.rbegin(); it != nums.rend(); it++) {
        cout << *(it) << " "; // Notice we still do it++, but it moves backwards!
    }
    cout << endl;

    // Method D: Range-based for loop (The most modern & cleanest way)
    // Note: Here "auto val" gets the ACTUAL VALUE, not a pointer. No "*" needed.
    cout << "   Range-based for loop:   ";
    for (auto val : nums) {
        cout << val << " "; 
    }
    cout << "\n\n";


    // =============================================================
    // 6. COMMON OPERATIONS (ERASE, POP, SIZE, CLEAR)
    // =============================================================
    cout << "6. COMMON OPERATIONS:\n";

    // erase(): Removes element(s) at specific iterator positions.
    nums.erase(nums.begin() + 1); // Removes 20 (element at index 1)
    cout << "   After erase(nums.begin() + 1): ";
    for (auto x : nums) cout << x << " ";
    cout << endl;

    // pop_back(): Removes the very last element in the vector.
    nums.pop_back(); // Removes 50
    cout << "   After pop_back(): ";
    for (auto x : nums) cout << x << " ";
    cout << endl;

    // size() & empty()
    cout << "   Current size: " << nums.size() << endl;
    cout << "   Is it empty? " << (nums.empty() ? "Yes" : "No") << endl;

    // clear(): Deletes everything inside the vector.
    nums.clear(); 
    cout << "   Size after clear(): " << nums.size() << endl;
}

int main() {
    explainVectors();
    return 0;
}