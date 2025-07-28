# 🌳 Trees in Data Structures

A **Tree** is a hierarchical data structure made up of nodes connected by edges. It starts with a root node and expands into children, forming branches.

---

## 🧠 Why Trees?

- Used in **file systems**, **databases**, **compilers**, and **network routing**.
- Enables efficient searching, insertion, and deletion.
- Basis for **Binary Search Trees**, **Heaps**, **Tries**, and **Segment Trees**.

---

## 🌲 Common Types of Trees

- **Binary Tree**: Each node has ≤ 2 children.
- **Binary Search Tree (BST)**: Left child < Root < Right child.
- **Balanced BSTs**: AVL Tree, Red-Black Tree.
- **N-ary Tree**: A node can have more than two children.
- **Trie**: Tree-like structure for strings.
- **Segment Tree / Fenwick Tree**: For range queries.
- **Heap**: Complete binary tree used in priority queues.

---

## 🔗 Must-Do Questions

| No. | Topic | Problem | Link |
|-----|-------|---------|------|
| 1️⃣ | Traversals | Inorder / Preorder / Postorder | [GFG Traversals](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/) |
| 2️⃣ | Level Order Traversal | [Leetcode 102](https://leetcode.com/problems/binary-tree-level-order-traversal/) |
| 3️⃣ | Height of Tree | [GFG](https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/) |
| 4️⃣ | Diameter of Tree | [Leetcode 543](https://leetcode.com/problems/diameter-of-binary-tree/) |
| 5️⃣ | Check if Tree is Balanced | [Leetcode 110](https://leetcode.com/problems/balanced-binary-tree/) |
| 6️⃣ | Invert Binary Tree | [Leetcode 226](https://leetcode.com/problems/invert-binary-tree/) |
| 7️⃣ | Lowest Common Ancestor (LCA) | [Leetcode 236](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) |
| 8️⃣ | Symmetric Tree | [Leetcode 101](https://leetcode.com/problems/symmetric-tree/) |
| 9️⃣ | Construct Tree from Inorder + Preorder | [Leetcode 105](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) |
| 🔟 | Maximum Path Sum | [Leetcode 124](https://leetcode.com/problems/binary-tree-maximum-path-sum/) |

---


## 📁 Folder Structure (if applicable)

```bash
trees/
│
├── traversals/
│ ├── inorder.cpp
│ ├── preorder.cpp
│ ├── postorder.cpp
│ ├── level_order.cpp
│
├── properties/
│ ├── height.cpp
│ ├── diameter.cpp
│ ├── is_balanced.cpp
│ ├── max_path_sum.cpp
│
├── tree_building/
│ ├── build_from_in_pre.cpp
│ ├── invert_tree.cpp
│
├── concepts/
│ ├── lca.cpp
│ ├── is_symmetric.cpp
│
└── README.md


---

## 💡 Tips

- Use **recursion** for traversals and basic operations.
- Understand difference between **DFS vs BFS** (used in tree and graph problems).
- Practice problems involving construction and modification of trees.

---

> 🌱 Mastering trees helps you crack questions on hierarchical data, recursion, and paves the way to advanced topics like **Graph**, **Trie**, **DP on Trees**, and **Segment Trees**.
