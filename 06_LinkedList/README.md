# 🔗 Linked List in DSA

Linked Lists are linear data structures where elements (nodes) are not stored in contiguous memory, allowing efficient insertions/deletions.

---

## 📌 Singly Linked List

A node contains:
- `data`
- `next` (pointer to next node)

### Pros:
- Efficient insertions/deletions at head or in middle
- Uses less memory per node than doubly

### Common Operations:
- Insert, Delete, Reverse
- Detect Cycle
- Merge Lists
- Add Numbers (LL-style)
- Find Intersection Point

📂 Code in: `linked_list/singly_linked_list/`

---

## 📌 Doubly Linked List

A node contains:
- `data`
- `next` (pointer to next node)
- `prev` (pointer to previous node)

### Pros:
- Bidirectional traversal
- Easy to delete a node from the end or middle

### Common Operations:
- Insert/Delete from front or end
- Reverse
- Rotate
- Flatten a multilevel list

📂 Code in: `linked_list/doubly_linked_list/`

---

## 📁 Recommended Practice Problems

- ✅ [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- ✅ [Detect Cycle](https://leetcode.com/problems/linked-list-cycle/)
- ✅ [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- ✅ [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)
- ✅ [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/)

---

> Mastering Linked Lists gives you solid control over pointers and dynamic memory. – 🧠


## 📁 Folder Structure (if applicable)

```bash
linked_list/
│
├── singly_linked_list/
│   ├── reverse_linked_list.cpp
│   ├── detect_cycle.cpp
│   ├── remove_nth_node.cpp
│   ├── merge_sorted_lists.cpp
│   ├── palindrome_list.cpp
│   ├── middle_node.cpp
│   ├── delete_node.cpp
│   ├── add_two_numbers.cpp
│   ├── intersection_point.cpp
│   └── README.md
│
├── doubly_linked_list/
│   ├── insert_node.cpp
│   ├── delete_node.cpp
│   ├── reverse_doubly_list.cpp
│   ├── flatten_multilevel_list.cpp
│   ├── rotate_doubly_list.cpp
│   └── README.md
│
└── README.md
