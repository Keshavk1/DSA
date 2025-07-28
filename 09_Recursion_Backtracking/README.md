# 🔁 Recursion & 🔄 Backtracking

Recursion is a technique where a function calls itself to solve smaller subproblems.  
Backtracking is an advanced form of recursion where we explore all possibilities and **backtrack** (undo) when a path fails, often used in **combinatorics**, **games**, and **puzzle solving**.

---

## 🧠 When to Use

- Recursion: When a problem can be divided into similar sub-problems.
- Backtracking: When you need to **explore all solutions** (e.g., permutations, combinations) and **prune** the wrong ones.

---

## 🔄 Recursion Strategy

1. Define the **base case**.
2. Break the problem into **subproblems**.
3. Let recursion solve the subproblems.

---

## 🧩 Backtracking Strategy

1. Make a move (choose).
2. Recurse (explore).
3. Undo the move (backtrack).

---

## 🔗 Must-Do Questions

| No. | Problem Name | Link |
|-----|--------------|------|
| 1️⃣ | Factorial Using Recursion | [Link](https://www.geeksforgeeks.org/program-for-factorial-of-a-number/) |
| 2️⃣ | Print All Subsets (Power Set) | [Leetcode 78](https://leetcode.com/problems/subsets/) |
| 3️⃣ | Subset Sum I | [GFG](https://www.geeksforgeeks.org/subset-sum-problem/) |
| 4️⃣ | Permutations | [Leetcode 46](https://leetcode.com/problems/permutations/) |
| 5️⃣ | Permutations II (with duplicates) | [Leetcode 47](https://leetcode.com/problems/permutations-ii/) |
| 6️⃣ | N-Queens Problem | [Leetcode 51](https://leetcode.com/problems/n-queens/) |
| 7️⃣ | Sudoku Solver | [Leetcode 37](https://leetcode.com/problems/sudoku-solver/) |
| 8️⃣ | Word Search | [Leetcode 79](https://leetcode.com/problems/word-search/) |
| 9️⃣ | Rat in a Maze | [GFG](https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/) |
| 🔟 | Combination Sum | [Leetcode 39](https://leetcode.com/problems/combination-sum/) |

---



## 📁 Folder Structure (if applicable)

```bash
recursion_backtracking/
│
├── basic_recursion/
│ ├── factorial.cpp
│ ├── fibonacci.cpp
│ ├── reverse_string.cpp
│ └── is_palindrome.cpp
│
├── subsets_combinations/
│ ├── power_set.cpp
│ ├── subset_sum.cpp
│ ├── combination_sum.cpp
│ └── combinations.cpp
│
├── permutations/
│ ├── permutations.cpp
│ ├── permutations_ii.cpp
│
├── n_queens_sudoku/
│ ├── n_queens.cpp
│ ├── sudoku_solver.cpp
│
├── grid_backtracking/
│ ├── rat_in_maze.cpp
│ ├── word_search.cpp
│
└── README.md