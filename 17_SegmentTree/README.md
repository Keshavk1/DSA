# 🌲 Segment Tree

A **Segment Tree** is a powerful data structure used for efficient range queries and updates in arrays.  
It is particularly useful when:

- The array is **static or semi-dynamic**
- You need to perform **range queries** (sum, min, max, GCD, etc.)
- You need to handle **frequent updates** on the array

---

## 🧠 Why Use Segment Tree?

| Feature              | Brute Force | Segment Tree |
|----------------------|-------------|---------------|
| Range Query (Sum/Min/Max) | O(n)        | O(log n)      |
| Point Update          | O(1)        | O(log n)      |
| Range Update (with Lazy) | O(n)        | O(log n)      |

---

## 📘 Core Operations

- **Build Tree**: Create tree from array.
- **Range Query**: Query in a given range [L, R].
- **Point Update**: Update a single element.
- **Lazy Propagation**: Efficiently handle range updates.

---

## 🔗 Must-Do Segment Tree Problems

| No. | Problem | Link |
|-----|---------|------|
| 1️⃣ | Range Sum Query - Mutable | [Leetcode 307](https://leetcode.com/problems/range-sum-query-mutable/) |
| 2️⃣ | Range Minimum Query | [GFG RMQ](https://www.geeksforgeeks.org/segment-tree-set-1-range-minimum-query/) |
| 3️⃣ | Range GCD Query | [GFG GCD](https://www.geeksforgeeks.org/segment-tree-for-range-gcd-queries/) |
| 4️⃣ | Count of Smaller Numbers After Self | [Leetcode 315](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) |
| 5️⃣ | Number of Inversions (using merge/segment) | [GFG](https://www.geeksforgeeks.org/counting-inversions/) |
| 6️⃣ | Lazy Propagation Example | [GFG Lazy](https://www.geeksforgeeks.org/lazy-propagation-in-segment-tree/) |
| 7️⃣ | Maximum Sum in Range with Updates | [Codeforces EDU](https://codeforces.com/edu/course/2/lesson/5/1) |
| 8️⃣ | XOR in a Range | [GFG](https://www.geeksforgeeks.org/xor-of-all-elements-in-a-given-range/) |
| 9️⃣ | Segment Tree Beats (Advanced) | [Codeforces 438D](https://codeforces.com/problemset/problem/438/D) |
| 🔟 | Reverse Pairs | [Leetcode 493](https://leetcode.com/problems/reverse-pairs/) |

---

## 📁 Folder Structure (if applicable)

```bash
segment_tree/
│
├── basic/
│ ├── build_and_query_sum.cpp
│ ├── range_minimum_query.cpp
│ ├── range_gcd_query.cpp
│
├── updates/
│ ├── point_update.cpp
│ ├── range_update_lazy.cpp
│
├── applications/
│ ├── count_smaller_after_self.cpp
│ ├── number_of_inversions.cpp
│ ├── reverse_pairs.cpp
│ ├── xor_in_range.cpp
│
├── advanced/
│ ├── segment_tree_beats.cpp
│
└── README.md


---

## 🧩 Tips

- Total nodes in segment tree = `4 * n` (safe size)
- Use **recursion** for clean implementation
- For **range update**, use **lazy propagation** to delay updates until necessary
- Segment trees can be extended to:
  - 2D Segment Tree
  - Persistent Segment Tree
  - Dynamic Segment Tree

---

> 🧠 Segment Tree is a game-changer in range query problems. Master it to stand out in contests and technical interviews!
