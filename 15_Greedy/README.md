# ⚡ Greedy Algorithm

**Greedy algorithms** make a series of choices by choosing the best option at the current step, **hoping** it leads to an optimal global solution.

They don’t explore all possibilities like DP or backtracking, making them **faster** and **simpler**—but they only work when the problem satisfies:

- ✅ **Greedy Choice Property** (local best leads to global best)
- ✅ **Optimal Substructure**

---

## 🧠 When to Use Greedy?

- Sorting-based decisions
- Intervals, activities, scheduling
- Problems with ratios, minimum/maximum count, etc.
- DP problems that can be reduced to greedy

---

## 🔗 Must-Do Greedy Problems

| No. | Problem | Link |
|-----|---------|------|
| 1️⃣ | N Meetings in One Room | [GFG](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1) |
| 2️⃣ | Activity Selection Problem | [GFG](https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1) |
| 3️⃣ | Fractional Knapsack | [GFG](https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1) |
| 4️⃣ | Minimum Number of Coins | [GFG](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1) |
| 5️⃣ | Job Sequencing Problem | [GFG](https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1) |
| 6️⃣ | Huffman Encoding | [GFG](https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1) |
| 7️⃣ | Candy Distribution | [Leetcode 135](https://leetcode.com/problems/candy/) |
| 8️⃣ | Gas Station | [Leetcode 134](https://leetcode.com/problems/gas-station/) |
| 9️⃣ | Jump Game | [Leetcode 55](https://leetcode.com/problems/jump-game/) |
| 🔟 | Lemonade Change | [Leetcode 860](https://leetcode.com/problems/lemonade-change/) |
| 🔁 | Non-overlapping Intervals | [Leetcode 435](https://leetcode.com/problems/non-overlapping-intervals/) |
| 🔁 | Assign Cookies | [Leetcode 455](https://leetcode.com/problems/assign-cookies/) |
| 🔁 | Merge Triplets to Form Target Triplet | [Leetcode 1899](https://leetcode.com/problems/merge-triplets-to-form-target-triplet/) |

---


## 📁 Folder Structure (if applicable)
```bash
greedy/
│
├── activity_selection.cpp
├── n_meetings_in_one_room.cpp
├── fractional_knapsack.cpp
├── min_coins.cpp
├── job_sequencing.cpp
├── huffman_encoding.cpp
├── candy_distribution.cpp
├── gas_station.cpp
├── jump_game.cpp
├── lemonade_change.cpp
├── non_overlapping_intervals.cpp
├── assign_cookies.cpp
├── merge_triplets.cpp
└── README.md

---

## 💡 Tip

> Always check if sorting or greedy locally gives the **global optimal**. If not, try DP!

---

