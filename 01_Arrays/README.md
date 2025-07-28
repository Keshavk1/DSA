# 📦 Arrays in Data Structures and Algorithms (DSA)

Arrays are one of the most fundamental data structures in programming. Mastering arrays is essential for solving a wide range of problems in competitive programming and interviews.

---

## 📘 What is an Array?

An **Array** is a **linear data structure** that stores elements of the **same data type** in a **contiguous block of memory**. Elements can be accessed using **indices** (starting from 0).

### ✅ Key Characteristics:
- Fixed size (in most languages like C++, Java).
- Random access using index.
- Efficient for iteration and lookups.

---

## 🧱 Basic Operations

| Operation            | Description                            | Time Complexity |
|----------------------|----------------------------------------|------------------|
| Access element       | `arr[i]`                                | O(1)             |
| Update element       | `arr[i] = x`                            | O(1)             |
| Insert at end        | If space is available                   | O(1)             |
| Insert at position   | Shift elements                         | O(n)             |
| Delete at position   | Shift elements                         | O(n)             |
| Search (Linear)      | Find element by scanning               | O(n)             |
| Search (Binary)      | Only for sorted arrays                 | O(log n)         |

---

## 🔧 Types of Arrays

- **1D Array**: Single row of elements.
- **2D Array (Matrix)**: Grid-like structure (rows and columns).
- **Dynamic Array**: Resizable (e.g., `vector` in C++, `ArrayList` in Java, `list` in Python).

---

## 📚 Important Problems to Practice

| Problem                              | Concepts Covered              |
|--------------------------------------|-------------------------------|
| Two Sum                              | Hashing, iteration            |
| Best Time to Buy and Sell Stock      | Sliding window                |
| Kadane’s Algorithm                   | Maximum subarray sum          |
| Move Zeroes                          | Two pointers                  |
| Merge Sorted Arrays                  | In-place merge                |
| Find Missing Number                  | XOR / Math                    |
| Maximum Product Subarray             | Dynamic Programming           |
| Set Matrix Zeroes (2D Array)         | Matrix manipulation           |
| Rotate Array                         | Reversal / Extra array        |
| Subarray Sum Equals K                | Prefix sum, hashmap           |

---

## 🧠 Tricks & Tips

- Use **prefix sum** to solve range sum problems efficiently.
- Use **two pointers** technique for sorted arrays.
- For many interview questions, **brute force won't work** — aim for O(n) or O(log n) solutions.
- Understand **space-time trade-offs**: use extra memory only when necessary.

---

## 🧪 Sample Code (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
## 📁 Folder Structure (if applicable)

```bash