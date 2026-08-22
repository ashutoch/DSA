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


// ===================================================================
// 5. STACK  (LIFO — Last In, First Out)
// ===================================================================
void explainStack() {
    cout << "========== STACK (LIFO) ==========\n";
    /*
        - Like a stack of plates: last plate you put on is the first you take off
        - ONLY these operations:
              push / emplace  → add to TOP
              pop             → remove from TOP
              top             → look at TOP
              size, empty, swap
        - NO iterators, NO indexing, NO looping with begin/end
        - NO front() or back() — only top()
    */
    stack<int> st;

    st.push(1);     // {1}
    st.push(2);     // {1, 2}
    st.push(3);     // {1, 2, 3}
    st.push(3);     // {1, 2, 3, 3}
    st.emplace(5);  // {1, 2, 3, 3, 5}  ← 5 is now on TOP

    cout << "top: " << st.top() << endl; // 5  (looks at top, does NOT remove)

    st.pop(); // removes top (5) → {1, 2, 3, 3}
    cout << "top after pop: " << st.top() << endl; // 3

    cout << "size: " << st.size() << endl;         // 4
    cout << "empty? " << (st.empty() ? "Yes" : "No") << endl; // No

    // --- SWAP ---
    stack<int> st1, st2;
    st1.push(10);
    st1.push(20); // st1 = {10, 20}  top=20

    st2.push(100);
    st2.push(200);
    st2.push(300); // st2 = {100, 200, 300}  top=300

    st1.swap(st2); // swap entire stacks

    cout << "After swap → st1.top(): " << st1.top() // 300
         << " | st2.top(): " << st2.top() << "\n\n"; // 20
}

// ===================================================================
// 6. QUEUE (FIFO — First In, First Out)
// ===================================================================
void explainQueue() {
    cout << "========== QUEUE (FIFO) ==========\n";
    /*
        - Real life analogy: A line of people at a ticket counter.
        - First element added is the first element removed (FIFO).
        - Time Complexity: O(1) for push, pop, front, and back.

        ALLOWED OPERATIONS:
          - push() / emplace() : Add element to the BACK
          - pop()              : Remove element from the FRONT
          - front()            : Look at FRONT element
          - back()             : Look at BACK element
          - size()             : Number of elements
          - empty()            : Check if empty (true/false)
          - swap()             : Swap two queues

        RESTRICTIONS:
          - NO iterators (no begin(), end())
          - NO index access (no q[0])
    */

    queue<int> q;

    // a. PUSH / EMPLACE: Adds elements to the back
    q.push(10);     // Queue: [10]        (Front: 10, Back: 10)
    q.push(20);     // Queue: [10, 20]    (Front: 10, Back: 20)
    q.emplace(30);  // Queue: [10, 20, 30](Front: 10, Back: 30)

    // b. FRONT & BACK: Inspecting values
    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element:  " << q.back() << endl;  // 30

    // You can modify elements directly using front() or back()
    q.back() += 5;  // Changes 30 to 35 -> Queue: [10, 20, 35]
    cout << "Modified Back element: " << q.back() << endl; // 35

    // c. POP: Removes the FRONT element
    q.pop();        // Removes 10 -> Queue: [20, 35]
    cout << "Front element after pop(): " << q.front() << endl; // 20

    // d. SIZE & EMPTY CHECK
    cout << "Current size: " << q.size() << endl;                    // 2
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No

    // e. SWAP: Swaps contents of two queues in O(1) time
    queue<int> q1, q2;
    q1.push(1);
    q1.push(2);   // q1 = [1, 2]

    q2.push(100);
    q2.push(200); // q2 = [100, 200]

    q1.swap(q2);  // Now q1 = [100, 200], q2 = [1, 2]

    cout << "After swap -> q1.front(): " << q1.front() 
        << " | q2.front(): " << q2.front() << "\n\n";
}

// ===================================================================
// 7. PRIORITY QUEUE (Max-Heap & Min-Heap)
// ===================================================================
void explainPriorityQueue() {
    cout << "========== PRIORITY QUEUE ==========\n";
    /*
        - Inside a Priority Queue, elements are stored in a TREE structure (Heap).
        - NOT stored sequentially, so elements are ALWAYS sorted automatically.
        - DEFAULT: Max-Heap (Largest element stays at the TOP).
        - Time Complexities:
            - push() / emplace() : O(log N)
            - pop()              : O(log N)
            - top()              : O(1)

        ALLOWED OPERATIONS:
          - push() / emplace() : Insert element (placed in sorted order)
          - pop()              : Remove top element
          - top()              : Look at top element
          - size(), empty(), swap()

        RESTRICTIONS:
          - NO front() or back() — ONLY top()
          - NO iterators, NO index access
    */

    // -------------------------------------------------------------
    // a. MAX-HEAP (Default: Largest element on Top)
    // -------------------------------------------------------------
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}   <- 8 goes to TOP automatically!
    pq.emplace(10); // {10, 8, 5, 2} <- 10 goes to TOP

    cout << "Max-Heap Top (Largest): " << pq.top() << endl; // 10

    pq.pop(); // Removes top element (10) -> {8, 5, 2}
    cout << "Top after pop(): " << pq.top() << endl;       // 8
    cout << "Current size: " << pq.size() << "\n\n";


    // -------------------------------------------------------------
    // b. MIN-HEAP (Smallest element on Top)
    // Syntax: priority_queue<type, container, comparator>
    // -------------------------------------------------------------
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(5);     // {5}
    min_pq.push(2);     // {2, 5}   <- 2 goes to TOP automatically!
    min_pq.push(8);     // {2, 5, 8}
    min_pq.emplace(1);  // {1, 2, 5, 8} <- 1 goes to TOP

    cout << "Min-Heap Top (Smallest): " << min_pq.top() << endl; // 1

    min_pq.pop(); // Removes top element (1) -> {2, 5, 8}
    cout << "Min-Heap Top after pop(): " << min_pq.top() << "\n\n"; // 2
}

// ===================================================================
// 8. SET (Sorted & Unique)
// ===================================================================
void explainSet() {
    cout << "========== SET ==========\n";
    /*
        - Stored in a Tree Structure (Red-Black Tree).
        - TWO GOLDEN RULES OF SET:
            1. SORTED : Elements are automatically kept in ascending order.
            2. UNIQUE : No duplicates allowed. If you insert 2 twice, it stores it once.
        
        - Time Complexity: O(log N) for insert, erase, find, count.

        ALLOWED OPERATIONS:
          - insert() / emplace() : Add element (keeps it sorted and unique)
          - find()               : Returns iterator to the element (or end() if not found)
          - count()              : Returns 1 (if present) or 0 (if absent)
          - erase()              : Delete by value OR by iterator / range
          - lower_bound() / upper_bound()
          - size(), empty(), clear(), swap()

        RESTRICTIONS:
          - Elements CANNOT be modified directly (e.g., *it = 10 is ILLEGAL)
            because modifying an element breaks the sorted tree structure.
    */

    set<int> st;

    // a. INSERTION (Auto-sorts & ignores duplicates)
    st.insert(1);   // {1}
    st.insert(2);   // {1, 2}
    st.emplace(2);  // {1, 2}  <- Duplicate ignored!
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4} <- Auto-sorted 3 into position!

    cout << "Set elements (sorted & unique): ";
    for (auto val : st) cout << val << " "; // Output: 1 2 3 4
    cout << "\n\n";


    // b. FIND & COUNT
    // find() returns an iterator to the element
    auto it = st.find(3); // Points to 3
    if (it != st.end()) {
        cout << "Element found using find(): " << *it << endl;
    }

    // If an element is NOT in the set, find() points to st.end()
    auto it_not_found = st.find(10);
    if (it_not_found == st.end()) {
        cout << "10 is NOT in the set!" << endl;
    }

    // count() returns 1 if element exists, 0 if it doesn't
    cout << "Count of 2: " << st.count(2) << endl; // 1
    cout << "Count of 5: " << st.count(5) << "\n\n"; // 0


    // c. ERASE VARIATIONS
    set<int> s = {10, 20, 30, 40, 50};

    // Variation A: Erase by Value
    s.erase(20); // Removes 20 -> {10, 30, 40, 50}

    // Variation B: Erase by Iterator
    auto it_30 = s.find(30);
    s.erase(it_30); // Removes 30 -> {10, 40, 50}

    // Variation C: Erase Range [start, end)
    auto start = s.find(10);
    auto end = s.find(50);
    s.erase(start, end); // Erases 10 and 40 (end is exclusive) -> {50}

    cout << "Set after erasures: ";
    for (auto val : s) cout << val << " "; // Output: 50
    cout << "\n\n";


    // d. LOWER BOUND & UPPER BOUND
    /*
        - lower_bound(x) : Points to element if present, ELSE points to first element > x
        - upper_bound(x) : ALWAYS points to the first element strictly > x
    */
    set<int> numbers = {10, 20, 30, 40, 50};

    auto lb1 = numbers.lower_bound(30); // Points to 30 (element exists)
    auto lb2 = numbers.lower_bound(25); // Points to 30 (first element > 25)
    
    auto ub1 = numbers.upper_bound(30); // Points to 40 (first element strictly > 30)

    cout << "lower_bound(30): " << *lb1 << endl; // 30
    cout << "lower_bound(25): " << *lb2 << endl; // 30
    cout << "upper_bound(30): " << *ub1 << "\n\n"; // 40
}

// ===================================================================
// 9. MULTISET (Sorted, BUT allows Duplicates)
// ===================================================================
void explainMultiSet() {
    cout << "========== MULTISET ==========\n";
    /*
        - Stored in a Tree Structure (Red-Black Tree).
        - RULES OF MULTISET:
            1. SORTED : Elements are kept in ascending order.
            2. DUPLICATES ALLOWED : Multiple copies of the same value can exist!
        
        - Time Complexity: O(log N) for insert, erase, find, count.

        TRICKY INTERVIEW / DSA DIFFERENCE ON erase():
          - ms.erase(x)          -> Deletes ALL occurrences of x!
          - ms.erase(ms.find(x)) -> Deletes ONLY THE FIRST occurrence of x!
    */

    multiset<int> ms;

    // a. INSERTION (Sorted, keeps duplicates)
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(2); // {1, 1, 2}
    ms.insert(1); // {1, 1, 1, 2}
    ms.insert(3); // {1, 1, 1, 2, 3}

    cout << "Multiset elements (sorted with duplicates): ";
    for (auto val : ms) cout << val << " "; // Output: 1 1 1 2 3
    cout << "\n\n";

    // b. COUNT (Returns actual frequency of element)
    cout << "Count of 1s: " << ms.count(1) << endl; // 3
    cout << "Count of 2s: " << ms.count(2) << "\n\n"; // 1


    // c. ERASE DEMONSTRATION (Crucial to understand!)
    
    // Case A: Erase by VALUE -> Deletes ALL occurrences of 1
    multiset<int> ms1 = {1, 1, 1, 2, 3};
    ms1.erase(1); // Removes ALL 1s -> {2, 3}
    cout << "ms1 after ms1.erase(1) [Deletes ALL 1s]: ";
    for (auto x : ms1) cout << x << " "; 
    cout << endl;

    // Case B: Erase by ITERATOR -> Deletes ONLY ONE occurrence
    multiset<int> ms2 = {1, 1, 1, 2, 3};
    ms2.erase(ms2.find(1)); // Finds first 1 and erases ONLY that one -> {1, 1, 2, 3}
    cout << "ms2 after ms2.erase(ms2.find(1)) [Deletes ONLY ONE 1]: ";
    for (auto x : ms2) cout << x << " "; 
    cout << "\n\n";

    // Case C: Erase Range [start, end)
    multiset<int> ms3 = {10, 20, 30, 40, 50};
    auto start = ms3.find(20);
    auto end = ms3.find(40);
    ms3.erase(start, end); // Erases 20 and 30 -> {10, 40, 50}
    cout << "ms3 after range erase: ";
    for (auto x : ms3) cout << x << " ";
    cout << "\n\n";
}


// ===================================================================
// 9. UNORDERED SET (NOT Sorted, Unique, Fast O(1))
// ===================================================================
void explainUnorderedSet() {
    cout << "========== UNORDERED SET ==========\n";
    /*
        - Stored in a HASH TABLE (not a tree).
        - RULES OF UNORDERED SET:
            1. NOT SORTED : Order is randomized/arbitrary!
            2. UNIQUE     : Duplicate values are NOT allowed.

        - Time Complexity: 
            - Average / Best Case : O(1) [Constant time — FASTER than set!]
            - Worst Case          : O(N) [Extremely rare, happens on hash collisions]

        RESTRICTIONS:
          - lower_bound() and upper_bound() DO NOT WORK HERE (because elements aren't sorted!)
          - Everything else (insert, erase, find, count, size) works the same as set.
    */

    unordered_set<int> st;

    st.insert(5);
    st.insert(1);
    st.insert(8);
    st.insert(2);
    st.insert(2); // Duplicate ignored!

    cout << "Unordered Set elements (Random order, Unique): ";
    for (auto val : st) cout << val << " "; // Output will be in random order e.g., 2 8 1 5
    cout << "\n\n";

    // FIND & ERASE (Works in O(1) time!)
    if (st.find(8) != st.end()) {
        cout << "Found 8 in O(1) time!" << endl;
    }

    st.erase(8); // Removes 8 in O(1) time

    cout << "After erasing 8: ";
    for (auto val : st) cout << val << " ";
    cout << "\n\n";
}


// ===================================================================
// 10. MAP (Sorted Keys & Unique Keys)
// ===================================================================
void explainMap() {
    cout << "========== MAP ==========\n";
    /*
        - Stores data in {KEY, VALUE} pairs (like a dictionary/phonebook).
        - Stored in a Tree Structure (Red-Black Tree).
        - RULES OF MAP:
            1. UNIQUE KEYS : Every key must be unique!
            2. SORTED KEYS : Keys are automatically kept in ascending order.
            3. VALUES      : Values CAN be duplicated.
        
        - Time Complexity: O(log N) for insert, erase, access, find.
    */

    map<int, string> m; // Key = int, Value = string

    // a. INSERTION METHODS
    m[1] = "Ashu";          // Method A: using [] operator
    m[2] = "Raj";
    m[3] = "Simran";
    m.insert({4, "Karan"});  // Method B: inserting a pair
    m.emplace(5, "Pooja");   // Method C: emplace

    // Overwriting value: Assigning a new value to an existing key updates it!
    m[1] = "Ashutosh"; // Key 1's value changes from "Ashu" to "Ashutosh"

    cout << "Map elements (Sorted by Key):\n";
    for (auto p : m) {
        // p.first  = KEY
        // p.second = VALUE
        cout << "  Key: " << p.first << " -> Value: " << p.second << endl;
    }
    cout << "\n";


    // b. ACCESSING VALUES & IMPORTANT CAVEAT
    cout << "Value at key 1: " << m[1] << endl; // Output: Ashutosh

    /*
        CRITICAL CAVEAT OF m[key]:
        If you try to read a key that DOES NOT exist using m[key],
        it automatically INSERTS that key with a default value!
        Example: cout << m[10]; -> Inserts {10, ""} into the map!

        To safely check if a key exists WITHOUT inserting it:
        Use find() or count():
    */
    if (m.find(3) != m.end()) {
        cout << "Key 3 exists with value: " << m[3] << endl;
    }

    if (m.count(10) == 0) {
        cout << "Key 10 does NOT exist!" << endl;
    }
    cout << "\n";


    // c. FIND & ERASE
    auto it = m.find(2); // Iterator pointing to pair {2, "Raj"}
    if (it != m.end()) {
        cout << "Found via iterator: Key " << it->first << " -> Value " << it->second << endl;
    }

    m.erase(2); // Erases key 2 and its value
    cout << "Count of key 2 after erase(2): " << m.count(2) << "\n\n";


    // d. LOWER_BOUND & UPPER_BOUND (Operates on KEYS!)
    map<int, int> mp = {{10, 100}, {20, 200}, {30, 300}};

    auto lb = mp.lower_bound(20); // Iterator to key >= 20 ({20, 200})
    auto ub = mp.upper_bound(20); // Iterator to key > 20  ({30, 300})

    cout << "lower_bound(20): Key " << lb->first << " -> Value " << lb->second << endl; // 20 -> 200
    cout << "upper_bound(20): Key " << ub->first << " -> Value " << ub->second << "\n\n"; // 30 -> 300
}


// ===================================================================
// 11. MULTIMAP (Sorted Keys, BUT allows Duplicate Keys)
// ===================================================================
void explainMultiMap() {
    cout << "========== MULTIMAP ==========\n";
    /*
        - Stored in a Tree Structure (Red-Black Tree).
        - RULES OF MULTIMAP:
            1. DUPLICATE KEYS ALLOWED : Multiple pairs can share the SAME key!
            2. SORTED KEYS          : Keys are kept in ascending order.

        - CRITICAL DIFFERENCE FROM MAP:
            - mm[key] DOES NOT WORK! You CANNOT use [] because one key can match multiple values.
            - Must use insert() or emplace().

        - Time Complexity: O(log N)
    */

    multimap<int, string> mm;

    // a. INSERTION (Must use insert or emplace)
    mm.insert({1, "Apple"});
    mm.insert({1, "Avocado"}); // Same key 1!
    mm.insert({2, "Banana"});
    mm.emplace(1, "Apricot");  // Same key 1!

    cout << "Multimap elements (Sorted by Key, Duplicate Keys Allowed):\n";
    for (auto p : mm) {
        cout << "  Key: " << p.first << " -> Value: " << p.second << endl;
    }
    cout << "\n";

    // b. COUNT & ERASE TRICK
    cout << "Count of key 1: " << mm.count(1) << endl; // Output: 3

    // mm.erase(1); // WARNING: Deletes ALL pairs with key = 1!

    // To delete ONLY ONE pair with key = 1:
    auto it = mm.find(1); // Finds the FIRST pair with key 1
    if (it != mm.end()) {
        mm.erase(it); // Erases ONLY that single pair
    }

    cout << "Count of key 1 after erasing ONE pair: " << mm.count(1) << "\n\n";
}


// ===================================================================
// 12. UNORDERED MAP (NOT Sorted Keys, Unique Keys, Fast O(1))
// ===================================================================
void explainUnorderedMap() {
    cout << "========== UNORDERED MAP ==========\n";
    /*
        - Stored in a HASH TABLE.
        - RULES OF UNORDERED MAP:
            1. UNIQUE KEYS : Every key must be unique.
            2. NOT SORTED  : Order of keys is completely random/arbitrary!

        - Time Complexity:
            - Average / Best Case : O(1) [Constant time — FASTER than map!]
            - Worst Case          : O(N) [Extremely rare, hash collisions]

        - RESTRICTION: NO lower_bound() or upper_bound().
        - Note: um[key] WORKS here just like regular map!
    */

    unordered_map<int, string> um;

    um[10] = "Ten";
    um[2]  = "Two";
    um[5]  = "Five";

    cout << "Unordered Map elements (Random Order, Unique Keys):\n";
    for (auto p : um) {
        cout << "  Key: " << p.first << " -> Value: " << p.second << endl;
    }
    cout << "\n";
}



int main() {
    explainVectors();
    explainList();
    explainDeque();
    explainQueue();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    return 0;
}