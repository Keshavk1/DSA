# 🔺 Heaps (Priority Queue)

A **Heap** is a special tree-based data structure that satisfies the **heap property**:

- In a **Max Heap**, the parent is always greater than its children.
- In a **Min Heap**, the parent is always smaller than its children.

Heaps are commonly used to implement **priority queues**, where access to the "highest" or "lowest" priority element is required efficiently.

---

## ⏱️ Time Complexities

| Operation       | Time Complexity |
|----------------|------------------|
| Insert          | O(log n)         |
| Get Min/Max     | O(1)             |
| Remove Min/Max  | O(log n)         |
| Heapify (build) | O(n)             |

---

## 📘 Applications

- **Priority Queue** (task scheduling)
- **Dijkstra’s Algorithm** (shortest path)
- **Top K Problems** (frequent elements, largest elements)
- **Median in a stream**
- **Heap Sort**

---

## 🔗 Must-Do Problems

| No. | Problem | Link |
|-----|---------|------|
| 1️⃣ | Kth Largest Element in Array | [Leetcode 215](https://leetcode.com/problems/kth-largest-element-in-an-array/) |
| 2️⃣ | K Closest Points to Origin | [Leetcode 973](https://leetcode.com/problems/k-closest-points-to-origin/) |
| 3️⃣ | Top K Frequent Elements | [Leetcode 347](https://leetcode.com/problems/top-k-frequent-elements/) |
| 4️⃣ | Merge K Sorted Lists | [Leetcode 23](https://leetcode.com/problems/merge-k-sorted-lists/) |
| 5️⃣ | Find Median from Data Stream | [Leetcode 295](https://leetcode.com/problems/find-median-from-data-stream/) |
| 6️⃣ | Min Cost to Connect Ropes | [Leetcode 1167](https://leetcode.com/problems/minimum-cost-to-connect-sticks/) |
| 7️⃣ | Smallest Range Covering Elements | [Leetcode 632](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) |
| 8️⃣ | Last Stone Weight | [Leetcode 1046](https://leetcode.com/problems/last-stone-weight/) |
| 9️⃣ | Sliding Window Median | [Leetcode 480](https://leetcode.com/problems/sliding-window-median/) |
| 🔟 | Maximum Frequency Stack | [Leetcode 895](https://leetcode.com/problems/maximum-frequency-stack/) |

---

## 📁 Folder Structure (if applicable)

```bash
heap/
│
├── kth_largest_element.cpp
├── k_closest_points.cpp
├── top_k_frequent_elements.cpp
├── merge_k_sorted_lists.cpp
├── median_data_stream.cpp
├── min_cost_connect_ropes.cpp
├── smallest_range_k_lists.cpp
├── last_stone_weight.cpp
├── sliding_window_median.cpp
├── max_freq_stack.cpp
└── README.md