/*
 * C++ Standard Library Functions Template
 * Comprehensive reference for competitive programming and general use
 * Created for quick access to commonly used functions
 */

#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// ALGORITHM FUNCTIONS (<algorithm>)
// ============================================================================

void algorithm_functions_demo() {
    vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};
    
    // Sorting and Searching
    sort(v.begin(), v.end());                    // Sort range
    stable_sort(v.begin(), v.end());             // Stable sort
    partial_sort(v.begin(), v.begin() + 3, v.end()); // Partial sort first 3
    nth_element(v.begin(), v.begin() + 2, v.end()); // Find 3rd smallest
    
    bool found = binary_search(v.begin(), v.end(), 5); // Binary search
    auto lower = lower_bound(v.begin(), v.end(), 3);   // First element >= 3
    auto upper = upper_bound(v.begin(), v.end(), 3);   // First element > 3
    auto range = equal_range(v.begin(), v.end(), 3);   // Range of equal elements
    
    // Min/Max operations
    int min_val = min(10, 20);                   // Minimum of two values
    int max_val = max(10, 20);                   // Maximum of two values
    auto minmax_pair = minmax(10, 20);           // Pair of min and max
    auto min_it = min_element(v.begin(), v.end()); // Iterator to minimum
    auto max_it = max_element(v.begin(), v.end()); // Iterator to maximum
    auto minmax_its = minmax_element(v.begin(), v.end()); // Pair of min/max iterators
    
    // Permutations
    vector<int> perm = {1, 2, 3};
    bool has_next = next_permutation(perm.begin(), perm.end()); // Next permutation
    bool has_prev = prev_permutation(perm.begin(), perm.end()); // Previous permutation
    
    // Heap operations
    make_heap(v.begin(), v.end());               // Create heap
    v.push_back(10);
    push_heap(v.begin(), v.end());               // Add element to heap
    pop_heap(v.begin(), v.end());                // Remove max element
    v.pop_back();
    sort_heap(v.begin(), v.end());               // Sort heap
    
    // Set operations
    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {3, 4, 5, 6, 7};
    vector<int> result;
    
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(result));
    result.clear();
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(result));
    result.clear();
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(result));
    result.clear();
    set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(result));
    
    // Other algorithms
    auto find_it = find(v.begin(), v.end(), 5);  // Find first occurrence
    auto find_if_it = find_if(v.begin(), v.end(), [](int x) { return x > 5; });
    int count_val = count(v.begin(), v.end(), 1); // Count occurrences
    int count_if_val = count_if(v.begin(), v.end(), [](int x) { return x > 3; });
    
    reverse(v.begin(), v.end());                 // Reverse range
    rotate(v.begin(), v.begin() + 2, v.end());   // Rotate range
    auto unique_it = unique(v.begin(), v.end()); // Remove consecutive duplicates
    auto remove_it = remove(v.begin(), v.end(), 1); // Remove elements equal to 1
    replace(v.begin(), v.end(), 2, 99);         // Replace 2 with 99
    fill(v.begin(), v.end(), 0);                 // Fill range with 0
    
    vector<int> gen_vec(5);
    generate(gen_vec.begin(), gen_vec.end(), []() { return rand() % 10; }); // Generate values
    
    vector<int> transform_result(5);
    transform(v.begin(), v.end(), transform_result.begin(), [](int x) { return x * 2; });
    
    int sum = accumulate(v.begin(), v.end(), 0); // Sum elements
    vector<int> partial_sums(5);
    partial_sum(v.begin(), v.end(), partial_sums.begin()); // Partial sums
    vector<int> adj_diffs(5);
    adjacent_difference(v.begin(), v.end(), adj_diffs.begin()); // Adjacent differences
}

// ============================================================================
// UTILITY FUNCTIONS (<utility>)
// ============================================================================

void utility_functions_demo() {
    int a = 10, b = 20;
    swap(a, b);                                  // Swap two values
    
    auto pair_val = make_pair(1, "hello");       // Create pair
    
    vector<int> vec = {1, 2, 3};
    auto moved_vec = move(vec);                  // Move semantics
    
    int old_val = exchange(a, 30);               // Exchange value and return old
    
    // Forward declaration for templates
    // forward<T>(value)                         // Perfect forwarding
}

// ============================================================================
// STRING FUNCTIONS (<string>)
// ============================================================================

void string_functions_demo() {
    string str = "Hello World";
    
    string sub = str.substr(0, 5);               // Get substring "Hello"
    size_t pos = str.find("World");              // Find substring
    size_t rpos = str.rfind("l");                // Find last occurrence
    str.replace(6, 5, "C++");                   // Replace substring
    str.insert(5, " Beautiful");                 // Insert string
    str.erase(5, 10);                           // Erase substring
    str.push_back('!');                          // Add character
    str.pop_back();                              // Remove last character
    
    // String conversion
    string num_str = to_string(123);             // Convert number to string
    int num = stoi("456");                       // Convert string to int
    long long_num = stol("789");                 // Convert string to long
    double dbl = stod("3.14");                   // Convert string to double
}

// ============================================================================
// NUMERIC FUNCTIONS (<numeric>)
// ============================================================================

void numeric_functions_demo() {
    int gcd_val = gcd(48, 18);                   // Greatest common divisor = 6
    long long lcm_val = lcm(12, 18);            // Least common multiple = 36
    
    vector<int> iota_vec(5);
    iota(iota_vec.begin(), iota_vec.end(), 1);  // Fill with 1, 2, 3, 4, 5
}

// ============================================================================
// MATH FUNCTIONS (<cmath>)
// ============================================================================

void math_functions_demo() {
    double x = -5.7;
    double y = 2.0;
    
    double abs_val = abs(x);                     // Absolute value = 5.7
    double sqrt_val = sqrt(16.0);                // Square root = 4.0
    double pow_val = pow(2.0, 3.0);             // Power = 8.0
    double exp_val = exp(1.0);                   // e^1 = 2.718...
    double log_val = log(2.718);                 // Natural logarithm
    double log10_val = log10(100.0);             // Base-10 logarithm = 2.0
    
    double sin_val = sin(3.14159/2);            // Sine of π/2
    double cos_val = cos(0);                     // Cosine of 0
    double tan_val = tan(3.14159/4);             // Tangent of π/4
    
    double ceil_val = ceil(4.3);                 // Ceiling = 5.0
    double floor_val = floor(4.7);               // Floor = 4.0
    double round_val = round(4.5);               // Round = 5.0
}

// ============================================================================
// CONTAINER FUNCTIONS
// ============================================================================

void container_functions_demo() {
    // Vector operations
    vector<int> vec;
    vec.push_back(1);                           // Add element
    vec.pop_back();                             // Remove last element
    vec.insert(vec.begin(), 0);                 // Insert element at beginning
    vec.erase(vec.begin());                     // Erase element at beginning
    vec.resize(10);                             // Resize vector
    vec.reserve(100);                           // Reserve capacity
    
    // Set/Map operations
    set<int> s;
    s.insert(5);                                // Insert element
    s.erase(5);                                 // Erase element
    auto find_it = s.find(5);                   // Find element
    int count_val = s.count(5);                 // Count occurrences
    auto lower_it = s.lower_bound(3);           // Lower bound
    auto upper_it = s.upper_bound(3);           // Upper bound
    
    map<string, int> m;
    m["key"] = 42;                              // Insert/update
    m.erase("key");                             // Erase element
    auto map_find = m.find("key");              // Find element
    
    // Queue operations
    queue<int> q;
    q.push(1);                                  // Add element
    q.pop();                                    // Remove element
    int front_val = q.front();                  // Access front element
    int back_val = q.back();                    // Access back element
    
    // Stack operations
    stack<int> st;
    st.push(1);                                 // Add element
    st.pop();                                   // Remove element
    int top_val = st.top();                     // Access top element
    
    // Priority Queue operations
    priority_queue<int> pq;
    pq.push(3);                                 // Add element
    pq.pop();                                   // Remove max element
    int max_val = pq.top();                     // Access max element
}

// ============================================================================
// MEMORY FUNCTIONS (<memory>)
// ============================================================================

void memory_functions_demo() {
    // Smart pointers
    auto unique_ptr_val = make_unique<int>(42); // Create unique_ptr
    auto shared_ptr_val = make_shared<int>(42); // Create shared_ptr
    weak_ptr<int> weak_ptr_val = shared_ptr_val; // Create weak_ptr
    
    // Check if weak_ptr is valid
    if (auto locked = weak_ptr_val.lock()) {
        // Use locked shared_ptr
    }
}

// ============================================================================
// RANDOM FUNCTIONS (<random>)
// ============================================================================

void random_functions_demo() {
    random_device rd;                           // Random device
    mt19937 gen(rd());                          // Mersenne Twister generator
    uniform_int_distribution<int> dis(1, 100);  // Uniform distribution
    
    int random_num = dis(gen);                  // Generate random number
    
    // Other distributions
    normal_distribution<double> normal_dis(0.0, 1.0); // Normal distribution
    bernoulli_distribution bernoulli_dis(0.5);  // Bernoulli distribution
}

// ============================================================================
// ITERATOR FUNCTIONS (<iterator>)
// ============================================================================

void iterator_functions_demo() {
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Iterator operations
    auto it = vec.begin();
    advance(it, 2);                             // Advance iterator by 2
    int distance_val = distance(vec.begin(), it); // Distance between iterators
    auto next_it = next(it);                    // Next iterator
    auto prev_it = prev(it);                    // Previous iterator
    
    // Iterator adapters
    vector<int> result;
    copy(vec.begin(), vec.end(), back_inserter(result)); // Copy to back_inserter
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " ")); // Copy to ostream
}

// ============================================================================
// FUNCTIONAL FUNCTIONS (<functional>)
// ============================================================================

void functional_functions_demo() {
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Function objects
    plus<int> adder;                            // Addition function object
    minus<int> subtractor;                      // Subtraction function object
    multiplies<int> multiplier;                 // Multiplication function object
    divides<int> divider;                       // Division function object
    modulus<int> modder;                        // Modulus function object
    negate<int> negator;                        // Negation function object
    
    // Logical function objects
    logical_and<bool> and_op;                   // Logical AND
    logical_or<bool> or_op;                     // Logical OR
    logical_not<bool> not_op;                   // Logical NOT
    
    // Comparison function objects
    equal_to<int> eq_op;                        // Equal to
    not_equal_to<int> ne_op;                    // Not equal to
    greater<int> gt_op;                         // Greater than
    less<int> lt_op;                           // Less than
    greater_equal<int> ge_op;                   // Greater than or equal
    less_equal<int> le_op;                     // Less than or equal
    
    // Using function objects
    int sum = accumulate(vec.begin(), vec.end(), 0, adder);
    sort(vec.begin(), vec.end(), greater<int>()); // Sort in descending order
}

// ============================================================================
// MAIN FUNCTION - DEMO ALL FUNCTIONS
// ============================================================================

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << "=== C++ Standard Library Functions Demo ===" << endl;
    
    cout << "\n1. Algorithm Functions:" << endl;
    algorithm_functions_demo();
    
    cout << "\n2. Utility Functions:" << endl;
    utility_functions_demo();
    
    cout << "\n3. String Functions:" << endl;
    string_functions_demo();
    
    cout << "\n4. Numeric Functions:" << endl;
    numeric_functions_demo();
    
    cout << "\n5. Math Functions:" << endl;
    math_functions_demo();
    
    cout << "\n6. Container Functions:" << endl;
    container_functions_demo();
    
    cout << "\n7. Memory Functions:" << endl;
    memory_functions_demo();
    
    cout << "\n8. Random Functions:" << endl;
    random_functions_demo();
    
    cout << "\n9. Iterator Functions:" << endl;
    iterator_functions_demo();
    
    cout << "\n10. Functional Functions:" << endl;
    functional_functions_demo();
    
    cout << "\n=== Demo Complete ===" << endl;
    
    return 0;
}

/*
 * QUICK REFERENCE GUIDE:
 * 
 * COMMON HEADERS:
 * #include <bits/stdc++.h>     // Most standard library functions
 * #include <algorithm>          // Algorithm functions
 * #include <utility>            // Utility functions (swap, pair, etc.)
 * #include <string>             // String functions
 * #include <numeric>            // Numeric functions (gcd, lcm, iota)
 * #include <cmath>              // Math functions
 * #include <memory>             // Smart pointers
 * #include <random>             // Random number generation
 * #include <iterator>           // Iterator functions
 * #include <functional>         // Function objects
 * 
 * COMPETITIVE PROGRAMMING TIPS:
 * 1. Use ios_base::sync_with_stdio(false); cin.tie(NULL); for fast I/O
 * 2. Use auto keyword for type deduction
 * 3. Use lambda functions for custom comparisons
 * 4. Use emplace_back() instead of push_back() for efficiency
 * 5. Use unordered_map/unordered_set for O(1) operations
 * 6. Use bitset for bit manipulation
 * 7. Use __builtin_popcount() for counting set bits
 * 
 * COMMON PATTERNS:
 * - Two pointers technique
 * - Binary search
 * - Sliding window
 * - Prefix sums
 * - Union-Find (Disjoint Set Union)
 * - Segment trees
 * - Binary Indexed Trees (Fenwick Trees)
 */