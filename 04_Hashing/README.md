# 🧩 Hashing in Data Structures and Algorithms (DSA)

**Hashing** is a powerful technique used to achieve constant-time performance for search, insert, and delete operations. It plays a major role in solving problems involving frequency, uniqueness, grouping, and fast lookups.

---

## 📘 What is Hashing?

Hashing is a technique to **map data (keys)** to a fixed-size **hash table** using a **hash function**. It enables efficient lookup, insertion, and deletion in average **O(1)** time.

---

## ⚙️ Core Concepts

| Concept              | Description                                                  |
|----------------------|--------------------------------------------------------------|
| **Hash Function**     | Converts key → index (e.g., `hash(key) % table_size`)        |
| **Hash Table / Map**  | Data structure to store key-value pairs                     |
| **Collision Handling**| Open addressing, chaining, linear probing                   |
| **Load Factor**       | Ratio of filled slots to table size                         |
| **Rehashing**         | Resizing table when load factor exceeds a threshold         |

---

## 🧱 Common Hash-Based Data Structures

| Language      | Unordered Map/Set       | Ordered Map/Set           |
|---------------|-------------------------|----------------------------|
| C++           | `unordered_map`, `unordered_set` | `map`, `set` (Red-Black Tree) |
| Java          | `HashMap`, `HashSet`    | `TreeMap`, `TreeSet`       |
| Python        | `dict`, `set`           | `collections.OrderedDict`  |

---

## 💡 Use Cases

- Frequency count of elements
- Fast lookup / membership tests
- Detect duplicates
- Grouping anagrams
- Subarray sum problems
- Caching (e.g., LRU Cache)
- Implementing sets, maps, and symbol tables

---

## 🔥 Common Hashing Problems

| Problem                                 | Concepts Used            |
|-----------------------------------------|---------------------------|
| Two Sum                                 | Map + Complement Lookup  |
| Subarray Sum Equals K                   | Prefix Sum + HashMap     |
| Group Anagrams                          | Sorting + Hashing        |
| Longest Consecutive Sequence            | Set + Boundary Expansion |
| Top K Frequent Elements                 | HashMap + Heap           |
| Happy Number                            | Cycle Detection + Set    |
| Longest Substring Without Repeating     | Sliding Window + Map     |
| Check Isomorphic Strings                | Bi-directional Mapping   |

---

## 🧪 Sample Code (C++)

### 🔍 Frequency Count Using HashMap

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 3, 2, 4};
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    for (auto [key, value] : freq) {
        cout << key << " occurs " << value << " times" << endl;
    }

    return 0;
}
## 📁 Folder Structure (if applicable)

```bash
hashing/
├── two_sum.cpp
├── subarray_sum_equals_k.cpp
├── group_anagrams.cpp
├── longest_consecutive_sequence.cpp
├── frequency_counter.cpp
├── README.md

