# C++ STL Cheatsheet

This cheatsheet covers **all** the key components of the C++ Standard Template Library (STL), including basic containers, advanced topics, algorithms, and detailed explanations. This will be your go-to guide for efficiently using STL in DSA problems.

---

## 📦 **Containers**

### 1. **Vector** (`std::vector`)
A dynamic array that allows elements to be accessed by index.

- **Declaration**:
  ```cpp
  std::vector<int> v;    // Empty vector of integers
  std::vector<int> v(5); // Vector of 5 integers (initialized to 0)
  std::vector<int> v = {1, 2, 3}; // Vector with initial values

    Operations:

v.push_back(10);  // Adds 10 to the end
v.pop_back();     // Removes the last element
v.size();         // Returns number of elements
v[i];             // Access element at index i
v.begin(), v.end() // Iterators to the start and end

Time Complexity:

    push_back(): O(1) amortized

    pop_back(): O(1)

    size(): O(1)

    Random access v[i]: O(1)

Iterating:

    for(auto x : v) {
        cout << x << " ";  // Range-based for loop
    }

2. Set (std::set)

A collection of unique elements stored in sorted order.

    Declaration:

std::set<int> s;  // Set of integers
std::set<int> s = {5, 3, 7}; // Initialize with values

Operations:

    s.insert(10);  // Inserts 10, returns pair (iterator, bool)
    s.erase(5);    // Removes 5 from the set
    s.find(7);     // Returns iterator to element, or end() if not found
    s.size();      // Returns number of elements

    Time Complexity:

        insert(): O(log n)

        erase(): O(log n)

        find(): O(log n)

        size(): O(1)

3. Map (std::map)

A collection of key-value pairs stored in sorted order by keys.

    Declaration:

std::map<int, string> m;  // Map with integer keys and string values
std::map<int, string> m = {{1, "one"}, {2, "two"}}; // Initialize with values

Operations:

    m[3] = "three";  // Adds key-value pair (3, "three")
    m.erase(2);      // Removes the element with key 2
    m.find(3);       // Finds and returns an iterator to the key
    m.size();        // Returns the number of key-value pairs

    Time Complexity:

        insert(): O(log n)

        erase(): O(log n)

        find(): O(log n)

        size(): O(1)

4. Unordered Set (std::unordered_set)

A collection of unique elements with no particular order (using hash table).

    Declaration:

std::unordered_set<int> us;
std::unordered_set<int> us = {5, 3, 7};

Operations:

    us.insert(10);  // Inserts 10
    us.erase(5);    // Removes 5 from the set
    us.find(7);     // Returns iterator to element or end()

    Time Complexity:

        insert(): O(1) on average

        erase(): O(1) on average

        find(): O(1) on average

        size(): O(1)

5. Unordered Map (std::unordered_map)

A collection of key-value pairs with no particular order (using hash table).

    Declaration:

std::unordered_map<int, string> um;
std::unordered_map<int, string> um = {{1, "one"}, {2, "two"}};

Operations:

    um[3] = "three";  // Adds key-value pair (3, "three")
    um.erase(2);      // Removes the element with key 2
    um.find(3);       // Finds and returns an iterator to the key

    Time Complexity:

        insert(): O(1) on average

        erase(): O(1) on average

        find(): O(1) on average

        size(): O(1)

6. Queue (std::queue)

A first-in-first-out (FIFO) data structure.

    Declaration:

std::queue<int> q; // Queue of integers

Operations:

    q.push(10);  // Adds 10 to the end of the queue
    q.pop();     // Removes the front element
    q.front();   // Returns the front element
    q.empty();   // Checks if the queue is empty

    Time Complexity:

        push(): O(1)

        pop(): O(1)

        front(): O(1)

        empty(): O(1)

7. Stack (std::stack)

A last-in-first-out (LIFO) data structure.

    Declaration:

std::stack<int> st; // Stack of integers

Operations:

    st.push(10);  // Pushes 10 onto the stack
    st.pop();     // Pops the top element
    st.top();     // Returns the top element
    st.empty();   // Checks if the stack is empty

    Time Complexity:

        push(): O(1)

        pop(): O(1)

        top(): O(1)

        empty(): O(1)

8. Priority Queue (std::priority_queue)

A queue that allows fast access to the largest (by default) or smallest element.

    Declaration:

std::priority_queue<int> pq; // Max-heap by default (largest element at the top)

Operations:

    pq.push(10);  // Pushes 10 onto the queue
    pq.pop();     // Removes the top element (max element)
    pq.top();     // Returns the top element (max element)
    pq.empty();   // Checks if the priority queue is empty

    Time Complexity:

        push(): O(log n)

        pop(): O(log n)

        top(): O(1)

        empty(): O(1)

⚙️ Algorithms
1. Sorting (std::sort)

Sorts a range of elements in ascending order.

    Syntax:

std::sort(v.begin(), v.end());  // Sorts vector v in ascending order

Time Complexity: O(n log n)

Reverse Order:

    std::sort(v.begin(), v.end(), std::greater<int>());

2. Binary Search (std::binary_search)

Checks if a sorted array contains an element.

    Syntax:

    std::binary_search(v.begin(), v.end(), key);  // Returns true if 'key' is found

    Time Complexity: O(log n)

3. Lower Bound and Upper Bound (std::lower_bound, std::upper_bound)

Finds the position where an element can be inserted to maintain order.

    Syntax:

    auto lb = std::lower_bound(v.begin(), v.end(), key);  // First element >= key
    auto ub = std::upper_bound(v.begin(), v.end(), key);  // First element > key

    Time Complexity: O(log n)

4. Reverse (std::reverse)

Reverses the elements in a container.

    Syntax:

    std::reverse(v.begin(), v.end());

    Time Complexity: O(n)

5. Copy (std::copy)

Copies elements from one container to another.

    Syntax:

    std::copy(v.begin(), v.end(), std::back_inserter(dest));

📝 Notes

    std::vector is preferred for dynamic arrays due to flexibility and push_back().

    std::map and std::set are perfect for storing unique elements with automatic sorting.

    std::unordered_map and std::unordered_set offer O(1) average time complexity for insertions and lookups (via hash tables).

    Iterators allow direct access to containers without using indexes.