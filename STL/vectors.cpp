#include <bits/stdc++.h>
using namespace std;

void explainVectors() {
    // -------------------------------------------------------------
    // 1. BASICS: WHAT IS A VECTOR?
    // -------------------------------------------------------------
    vector<int> v; // Empty vector {}

    v.push_back(1);    // v = {1}
    v.emplace_back(2); // v = {1, 2}

    // PRINTING METHOD 1: Range-based for loop (Cleanest way)
    cout << "v after push_back & emplace_back: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // -------------------------------------------------------------
    // 2. VECTOR OF PAIRS
    // -------------------------------------------------------------
    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); 
    vec.emplace_back(3, 4); 

    cout << "\nVector of pairs elements: ";
    cout << "{" << vec[0].first << ", " << vec[0].second << "}, {" << vec[1].first << ", " << vec[1].second << "}" << endl;


    // -------------------------------------------------------------
    // 3. INITIALIZING VECTORS WITH SIZE AND DEFAULT VALUES
    // -------------------------------------------------------------
    
    // Size 5 with all elements = 100
    vector<int> v3(5, 100); 
    cout << "\nv3 (5 elements of 100): ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // Size 5 initialized with 0
    vector<int> v5(5); 
    cout << "v5 (5 elements of 0): ";
    for (int x : v5) cout << x << " ";
    cout << endl;

    // Copying v1 into v2
    vector<int> v1(5, 20); 
    vector<int> v2(v1);    
    cout << "v2 (copy of v1): ";
    for (int x : v2) cout << x << " ";
    cout << endl;


    // -------------------------------------------------------------
    // 4. ACCESSING ELEMENTS & ITERATORS
    // -------------------------------------------------------------
    vector<int> nums = {10, 20, 30, 40, 50};

    // PRINTING METHOD 2: Index-based loop (Array style)
    cout << "\nnums (using index loop): ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Using Iterators
    vector<int>::iterator it = nums.begin(); 
    cout << "First element (*it): " << *(it) << endl; 

    it++; 
    cout << "Second element after it++: " << *(it) << endl; 

    cout << "Last element using back(): " << nums.back() << endl; 

    cout << "Using iterator and for loop:" << endl;
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        cout << *(it) << " ";
    
    cout << "Using iterator and auto: " << endl;
    for (auto it = nums.begin(); it != nums.end(); it++) cout << *(it) << " ";

    cout << "Using for(it : v): ";
    for (auto it : nums) cout << it << " ";

    // -------------------------------------------------------------
    // 5. PRINTING USING ITERATORS (STL Style)
    // -------------------------------------------------------------
    // PRINTING METHOD 3: Iterator Loop
    cout << "\nnums (using iterators): ";
    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;


    // -------------------------------------------------------------
    // 6. COMMON OPERATIONS (ERASE, POP, SIZE)
    // -------------------------------------------------------------

    // Erase index 1 (removes 20)
    nums.erase(nums.begin() + 1); 
    cout << "\nAfter erasing index 1: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // Pop back (removes 50)
    nums.pop_back(); 
    cout << "After pop_back(): ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // Size & Empty check
    cout << "Current size: " << nums.size() << endl;
    cout << "Is empty? " << (nums.empty() ? "Yes" : "No") << endl;

    // Clear everything
    nums.clear(); 
    cout << "Size after clear(): " << nums.size() << endl;
}

int main() {
    explainVectors();
    return 0;
}