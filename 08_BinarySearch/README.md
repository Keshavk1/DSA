# 🔍 Binary Search

Binary Search is a highly efficient algorithm used to search for an element in a **sorted array** by repeatedly dividing the search interval in half. It works in **O(log n)** time, making it ideal for scenarios where linear search is too slow.

---

## 📘 When to Use Binary Search?

- The array or range is **sorted** or **monotonic**.
- You're asked to **find**, **search**, or **optimize** something.
- You need to find **first occurrence**, **last occurrence**, or work with **rotated arrays**.
- You want to perform **Binary Search on Answer** — a trick where you search over a range instead of an array.

---

## 🧠 Binary Search Patterns

### 1. Standard Binary Search
Search for an element's index in a sorted array.

### 2. Lower Bound / Upper Bound
Find the first/last position where a condition is true.

### 3. Binary Search on Answer
Use binary search on the **value space**, not on the array.

---

## 🔗 Must-Do Binary Search Questions

| No. | Problem Name | Link |
|-----|--------------|------|
| 1️⃣ | Binary Search | [Leetcode 704](https://leetcode.com/problems/binary-search/) |
| 2️⃣ | Search Insert Position | [Leetcode 35](https://leetcode.com/problems/search-insert-position/) |
| 3️⃣ | First and Last Position of Element | [Leetcode 34](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) |
| 4️⃣ | Search in Rotated Sorted Array | [Leetcode 33](https://leetcode.com/problems/search-in-rotated-sorted-array/) |
| 5️⃣ | Minimum in Rotated Sorted Array | [Leetcode 153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) |
| 6️⃣ | Peak Element | [Leetcode 162](https://leetcode.com/problems/find-peak-element/) |
| 7️⃣ | Single Element in Sorted Array | [Leetcode 540](https://leetcode.com/problems/single-element-in-a-sorted-array/) |
| 8️⃣ | Median of Two Sorted Arrays | [Leetcode 4](https://leetcode.com/problems/median-of-two-sorted-arrays/) |
| 9️⃣ | Koko Eating Bananas | [Leetcode 875](https://leetcode.com/problems/koko-eating-bananas/) |
| 🔟 | Capacity to Ship Packages | [Leetcode 1011](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) |

---


## 📁 Folder Structure (if applicable)

```bash
binary_search/
│
├── classic/
│ ├── binary_search.cpp
│ ├── search_insert_position.cpp
│ ├── first_last_position.cpp
│ └── peak_element.cpp
│
├── rotated_sorted/
│ ├── search_rotated_array.cpp
│ ├── find_min_rotated.cpp
│ └── single_element.cpp
│
├── bs_on_answer/
│ ├── koko_eating_bananas.cpp
│ ├── ship_packages.cpp
│ └── min_days_make_bouquets.cpp
│
├── advanced/
│ ├── median_two_sorted_arrays.cpp
│ └── sqrt_binary_search.cpp
│
└── README.md