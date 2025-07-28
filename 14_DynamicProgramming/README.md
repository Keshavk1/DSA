# 📚 Dynamic Programming (DP)

**Dynamic Programming** is an optimization technique used to solve problems by breaking them down into **overlapping subproblems** and **storing the results** to avoid redundant computations.

It's typically applied to problems with:
- **Optimal substructure**: Problem can be solved using solutions to subproblems.
- **Overlapping subproblems**: Same subproblems are solved multiple times.

---

## 🧠 DP Techniques

| Type | Description |
|------|-------------|
| Top-Down (Memoization) | Recursive + Caching |
| Bottom-Up (Tabulation) | Iterative + Table Filling |
| Space Optimization | Reduce 2D/1D DP to lower space |

---

## 🧩 Common Patterns

- **0/1 Knapsack**
- **Unbounded Knapsack**
- **Fibonacci Series**
- **Longest Increasing/Decreasing Subsequence**
- **Longest Common Subsequence / Substring**
- **Subset Sum / Partition**
- **DP on Trees / Grids / Strings**

---

## 🔗 Must-Do Problems

| No. | Problem | Link |
|-----|---------|------|
| 1️⃣ | Climbing Stairs | [Leetcode 70](https://leetcode.com/problems/climbing-stairs/) |
| 2️⃣ | House Robber | [Leetcode 198](https://leetcode.com/problems/house-robber/) |
| 3️⃣ | Longest Palindromic Substring | [Leetcode 5](https://leetcode.com/problems/longest-palindromic-substring/) |
| 4️⃣ | Longest Increasing Subsequence | [Leetcode 300](https://leetcode.com/problems/longest-increasing-subsequence/) |
| 5️⃣ | Coin Change | [Leetcode 322](https://leetcode.com/problems/coin-change/) |
| 6️⃣ | Maximum Product Subarray | [Leetcode 152](https://leetcode.com/problems/maximum-product-subarray/) |
| 7️⃣ | Partition Equal Subset Sum | [Leetcode 416](https://leetcode.com/problems/partition-equal-subset-sum/) |
| 8️⃣ | Edit Distance | [Leetcode 72](https://leetcode.com/problems/edit-distance/) |
| 9️⃣ | Decode Ways | [Leetcode 91](https://leetcode.com/problems/decode-ways/) |
| 🔟 | Unique Paths | [Leetcode 62](https://leetcode.com/problems/unique-paths/) |
| 🔁 | Palindromic Substrings | [Leetcode 647](https://leetcode.com/problems/palindromic-substrings/) |
| 🔁 | Burst Balloons | [Leetcode 312](https://leetcode.com/problems/burst-balloons/) |
| 🔁 | Matrix Chain Multiplication | [GFG MCM](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1) |

---

## 📁 Folder Structure (if applicable)

```bash
dynamic_programming/
│
├── climbing_stairs.cpp
├── house_robber.cpp
├── longest_palindromic_substring.cpp
├── longest_increasing_subsequence.cpp
├── coin_change.cpp
├── max_product_subarray.cpp
├── equal_subset_partition.cpp
├── edit_distance.cpp
├── decode_ways.cpp
├── unique_paths.cpp
├── palindromic_substrings.cpp
├── burst_balloons.cpp
├── matrix_chain_multiplication.cpp
└── README.md

---

## 💡 Tips to Master DP

- Always ask:  
  → Can I break this into smaller overlapping subproblems?  
  → Is there a brute-force recursive solution?

- Define:
  - **State** → What parameters define subproblems?
  - **Transition** → How to build from smaller to bigger problems?
  - **Base Cases** → What are the smallest valid inputs?

---

> 🎯 “Think Recursion First. Then Optimize using DP.” — a golden rule while solving DP problems.
