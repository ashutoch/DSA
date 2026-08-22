#include <bits/stdc++.h>
using namespace std;

// ===================================================================
// 1. VECTORS
// ===================================================================
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
    cout << "{" << vec[0].first << ", " << vec[0].second << "}, {"
         << vec[1].first << ", " << vec[1].second << "}\n\n";


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
           rend()       begin()                     rbegin()       end()
    */
    vector<int> nums = {10, 20, 30, 40, 50};
    cout << "4. ITERATORS DEMONSTRATION on {10, 20, 30, 40, 50}\n";

    // begin(): Points to the FIRST element
    vector<int>::iterator it1 = nums.begin();
    cout << "   nums.begin() points to: " << *(it1) << endl;

    // end(): Points RIGHT AFTER the last element → use end() - 1 for last value
    vector<int>::iterator it2 = nums.end();
    cout << "   nums.end() - 1 points to: " << *(it2 - 1) << endl;

    // rbegin(): Points to the LAST element (moves backwards on ++)
    vector<int>::reverse_iterator it3 = nums.rbegin();
    cout << "   nums.rbegin() points to: " << *(it3) << endl;

    // rend(): Points RIGHT BEFORE the first element → use rend() - 1 for first value
    vector<int>::reverse_iterator it4 = nums.rend();
    cout << "   nums.rend() - 1 points to: " << *(it4 - 1) << "\n\n";


    // =============================================================
    // 5. WAYS TO LOOP AND PRINT VECTORS
    // =============================================================
    cout << "5. PRINTING METHODS:\n";

    // Method A: Index-based loop
    cout << "   Array style (i < size): ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Method B: Standard iterator loop
    // "auto" becomes vector<int>::iterator automatically
    cout << "   Standard Iterator loop: ";
    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Method C: Reverse iterator loop (prints backwards)
    cout << "   Reverse Iterator loop:  ";
    for (auto it = nums.rbegin(); it != nums.rend(); it++) {
        cout << *(it) << " "; // still it++, but it moves backwards
    }
    cout << endl;

    // Method D: Range-based for loop (gets the VALUE, not a pointer)
    cout << "   Range-based for loop:   ";
    for (auto val : nums) {
        cout << val << " ";
    }
    cout << "\n\n";


    // =============================================================
    // 6. COMMON OPERATIONS (ERASE, POP, SIZE, CLEAR)
    // =============================================================
    cout << "6. COMMON OPERATIONS:\n";

    // erase single element
    nums.erase(nums.begin() + 1); // removes 20
    cout << "   After erase(nums.begin() + 1): ";
    for (auto x : nums) cout << x << " ";
    cout << endl;

    // erase a range [start, end)  → end is EXCLUSIVE
    // Example (commented so output stays clean):
    // nums.erase(nums.begin() + 1, nums.begin() + 3); // deletes index 1 and 2

    // pop_back(): remove last element
    nums.pop_back(); // removes 50
    cout << "   After pop_back(): ";
    for (auto x : nums) cout << x << " ";
    cout << endl;

    cout << "   Current size: " << nums.size() << endl;
    cout << "   Is it empty? " << (nums.empty() ? "Yes" : "No") << endl;

    nums.clear(); // delete everything
    cout << "   Size after clear(): " << nums.size() << "\n\n";


    // =============================================================
    // 7. INSERT FUNCTION & ITS VARIATIONS
    // insert is O(N) because elements after the position must shift
    // =============================================================
    cout << "7. INSERT VARIATIONS:\n";
    vector<int> a = {10, 20, 30, 40};

    // Variation 1: insert a single value at a position
    a.insert(a.begin(), 100); // at front
    cout << "   insert single at begin: ";
    for (auto x : a) cout << x << " "; // 100 10 20 30 40
    cout << endl;

    // Variation 2: insert multiple copies of the same value
    // insert(position, count, value)
    a.insert(a.begin() + 2, 3, 5); // three 5s starting at index 2
    cout << "   insert 3 copies of 5:   ";
    for (auto x : a) cout << x << " "; // 100 10 5 5 5 20 30 40
    cout << endl;

    // Variation 3: insert / copy a range from another vector
    vector<int> extra = {7, 8, 9};
    // insert(where, copy_from_begin, copy_from_end)
    a.insert(a.end(), extra.begin(), extra.end());
    cout << "   insert range {7,8,9}:   ";
    for (auto x : a) cout << x << " "; // ... 40 7 8 9
    cout << "\n\n";


    // =============================================================
    // 8. COPY & SWAP
    // =============================================================
    cout << "8. COPY & SWAP:\n";

    // --- ways to COPY a vector ---
    vector<int> original = {1, 2, 3};

    // Method A: copy constructor
    vector<int> c1(original);

    // Method B: assignment operator
    vector<int> c2;
    c2 = original;

    // Method C: assign(begin, end)
    vector<int> c3;
    c3.assign(original.begin(), original.end());

    cout << "   c1 (copy ctor):  ";
    for (auto x : c1) cout << x << " ";
    cout << endl;
    cout << "   c2 (assignment): ";
    for (auto x : c2) cout << x << " ";
    cout << endl;
    cout << "   c3 (assign):     ";
    for (auto x : c3) cout << x << " ";
    cout << endl;

    // --- SWAP ---
    // Swaps contents of two vectors in O(1) time
    vector<int> s1 = {1, 2};
    vector<int> s2 = {9, 8, 7};
    cout << "   Before swap → s1: ";
    for (auto x : s1) cout << x << " ";
    cout << " | s2: ";
    for (auto x : s2) cout << x << " ";
    cout << endl;

    s1.swap(s2); // or swap(s1, s2);

    cout << "   After  swap → s1: ";
    for (auto x : s1) cout << x << " ";
    cout << " | s2: ";
    for (auto x : s2) cout << x << " ";
    cout << "\n\n";
}


// ===================================================================
// 2. LIST  (Doubly Linked List)
// ===================================================================
void explainList() {
    cout << "========== LIST (Doubly Linked List) ==========\n";
    /*
        - Like vector, but implemented as a doubly linked list
        - push_front() / emplace_front() are O(1)  ← main advantage over vector
        - NO random access → you CANNOT do ls[2]
        - insert / erase anywhere is O(1) once you have the iterator
        - begin, end, size, clear, swap all work the same as vector
    */
    list<int> ls;

    ls.push_back(2);     // {2}
    ls.emplace_back(4);  // {2, 4}

    ls.push_front(5);    // {5, 2, 4}     ← O(1), expensive in vector!
    ls.emplace_front(0); // {0, 5, 2, 4}

    // rest of the API matches vector:
    // ls.insert(...), ls.erase(...), ls.pop_back(), ls.pop_front(),
    // ls.size(), ls.empty(), ls.clear(), ls.swap(...)

    cout << "List elements: ";
    for (auto val : ls) cout << val << " ";
    cout << "\n\n";
}


// ===================================================================
// 3. DEQUE  (Double-Ended Queue)  — pronounced "deck"
// ===================================================================
void explainDeque() {
    cout << "========== DEQUE (Double-Ended Queue) ==========\n";
    /*
        - Fast push/pop at BOTH front and back  → O(1)
        - ALSO supports random access → dq[i] works
        - Think of it as: vector + push_front/pop_front
    */
    deque<int> dq;

    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    cout << "After pushes: ";
    for (auto x : dq) cout << x << " "; // 3 4 1 2
    cout << endl;

    dq.pop_back();  // removes 2 → {3, 4, 1}
    dq.pop_front(); // removes 3 → {4, 1}

    cout << "After pops:   ";
    for (auto x : dq) cout << x << " "; // 4 1
    cout << endl;

    cout << "front(): " << dq.front() << " | back(): " << dq.back() << endl;
    cout << "dq[0]: " << dq[0] << " | dq[1]: " << dq[1] << "\n\n"; // random access!
}


// ===================================================================
// 4. QUEUE  (FIFO — First In, First Out)
// ===================================================================
void explainQueue() {
    cout << "========== QUEUE (FIFO) ==========\n";
    /*
        - Like a ticket line: first person in is first person out
        - ONLY these operations:
              push / emplace  → add to BACK
              pop             → remove from FRONT
              front           → look at FRONT
              back            → look at BACK
              size, empty, swap
        - NO iterators, NO indexing, NO looping with begin/end
    */
    queue<int> q;

    q.push(1);     // {1}
    q.push(2);     // {1, 2}
    q.emplace(4);  // {1, 2, 4}

    q.back() += 5; // modify last element: 4 → 9  → {1, 2, 9}

    cout << "front: " << q.front() << " | back: " << q.back() << endl; // 1 | 9

    q.pop(); // removes front (1) → {2, 9}
    cout << "front after pop: " << q.front() << endl; // 2

    cout << "size: " << q.size() << " | empty? "
        << (q.empty() ? "Yes" : "No") << "\n\n";
}


int main() {
    explainVectors();
    explainList();
    explainDeque();
    explainQueue();
    return 0;
}