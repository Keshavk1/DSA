# 📚 Stack & Queue in DSA

Stacks and Queues are linear data structures that follow specific access patterns.

---

## 🔁 Stack

A **Stack** follows **LIFO** (Last In First Out).  
Example: undo operations, backtracking, expression evaluation.

### 🧠 Operations:
- `push(x)` – add to top  
- `pop()` – remove top  
- `top()` / `peek()` – view top  
- `isEmpty()` – check if empty  

### 🔥 Applications:
- Balanced parentheses
- Expression evaluation
- Reversing strings
- Backtracking algorithms (DFS, recursion stack)
- Monotonic stacks

---

## 🔁 Queue

A **Queue** follows **FIFO** (First In First Out).  
Example: job scheduling, printers, call queues.

### 🧠 Operations:
- `enqueue(x)` – add to rear  
- `dequeue()` – remove from front  
- `peek()` – view front  
- `isEmpty()` – check if empty

### 🔄 Types:
- Circular Queue
- Deque (Double-Ended Queue)
- Priority Queue (Min/Max Heap)

---

## ✅ Must-Do Stack Problems

| # | Problem | Topic |
|--|---------|-------|
| 1 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Basic Stack |
| 2 | [Min Stack](https://leetcode.com/problems/min-stack/) | Stack with O(1) min |
| 3 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | Monotonic Stack |
| 4 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | NGE |
| 5 | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/) | Circular NGE |
| 6 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | Monotonic Stack |
| 7 | [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | Simulation |
| 8 | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | Eval Stack |
| 9 | [Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | Greedy + Stack |
| 10 | [Decode String](https://leetcode.com/problems/decode-string/) | Stack of Strings |

---

## ✅ Must-Do Queue Problems

| # | Problem | Topic |
|--|---------|-------|
| 1 | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Stack Simulation |
| 2 | [Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/) | Sliding Window |
| 3 | [Perfect Squares](https://leetcode.com/problems/perfect-squares/) | BFS with Queue |
| 4 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) | BFS Grid |
| 5 | [Walls and Gates](https://leetcode.com/problems/walls-and-gates/) | BFS Grid |
| 6 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | Deque |
| 7 | [Design Circular Queue](https://leetcode.com/problems/design-circular-queue/) | Array Queue |
| 8 | [Design Circular Deque](https://leetcode.com/problems/design-circular-deque/) | Array Deque |

---


## 📁 Folder Structure (if applicable)

```bash
stack_queue/
│
├── stack/
│   ├── valid_parentheses.cpp
│   ├── min_stack.cpp
│   ├── daily_temperatures.cpp
│   ├── next_greater_element_1.cpp
│   ├── next_greater_element_2.cpp
│   ├── largest_rectangle_histogram.cpp
│   ├── asteroid_collision.cpp
│   ├── eval_reverse_polish.cpp
│   ├── remove_k_digits.cpp
│   ├── decode_string.cpp
│   └── README.md
│
├── queue/
│   ├── implement_queue_using_stacks.cpp
│   ├── number_of_recent_calls.cpp
│   ├── perfect_squares.cpp
│   ├── rotting_oranges.cpp
│   ├── walls_and_gates.cpp
│   ├── sliding_window_maximum.cpp
│   ├── design_circular_queue.cpp
│   ├── design_circular_deque.cpp
│   └── README.md
│
└── README.md
