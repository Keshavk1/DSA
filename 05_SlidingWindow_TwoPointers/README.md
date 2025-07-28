# 🚪 Sliding Window Technique in DSA

The **Sliding Window** is a powerful optimization technique used to reduce the time complexity of problems involving **contiguous subarrays or substrings**. It replaces nested loops with a single loop, achieving **O(n)** time in many cases.

---

## 📘 What is Sliding Window?

Sliding Window is a method where a **window of elements** (like a subarray or substring) slides over the input data structure to compute something efficiently.

### 💡 Key Idea:
- Maintain a **window** using two pointers (`start`, `end`)
- Expand or shrink the window based on problem constraints
- Avoid recomputing from scratch by **reusing previous work**

---

## 🔧 When to Use Sliding Window?

- Subarrays/substrings with:
  - Fixed size (length `k`)
  - Variable size (max/min length satisfying condition)
  - Matching frequency/pattern (like anagram/unique chars)

---

## 🧠 Types of Sliding Window

### 🔹 1. **Fixed Size Window**
When the window size `k` is constant.

```cpp
// Example: Max sum of subarray of size k
int maxSum(vector<int>& arr, int k) {
    int sum = 0, maxSum = 0;
    for (int i = 0; i < k; ++i) sum += arr[i];
    maxSum = sum;
    for (int i = k; i < arr.size(); ++i) {
        sum += arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
## 📁 Folder Structure (if applicable)

```bash
sliding_window/
├── max_sum_subarray_size_k.cpp
├── longest_unique_substring.cpp
├── min_window_substring.cpp
├── count_anagram_occurrences.cpp
├── max_consecutive_ones.cpp
└── README.md
