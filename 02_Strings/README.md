# ✨ Strings in Data Structures and Algorithms (DSA)

Strings are one of the most common and important data types in programming. String manipulation is a frequent topic in coding interviews and competitive programming due to its variety and complexity.

---

## 📘 What is a String?

A **String** is a sequence of **characters** stored together. It is used to represent text-based data like names, messages, passwords, etc.

- In C/C++: an array of characters ending with a null character `\0`.
- In Java/Python: Strings are objects with built-in methods.

---

## 🔧 Basic Operations on Strings

| Operation           | Description                              | Time Complexity |
|---------------------|------------------------------------------|------------------|
| Access character     | `str[i]`                                 | O(1)             |
| Concatenation        | `str1 + str2`                            | O(n + m)         |
| Substring            | `str.substr(start, length)`             | O(length)        |
| Comparison           | `str1 == str2`                           | O(n)             |
| Length               | `str.length()` or `str.size()`           | O(1)             |
| Traversal            | Loop over characters                     | O(n)             |
| Reversal             | Using loop or built-in                   | O(n)             |

---

## 🧠 Key String Algorithms & Concepts

| Technique / Concept            | Used For                                      |
|--------------------------------|-----------------------------------------------|
| Two Pointers / Sliding Window | Substrings, palindromes, anagrams             |
| Hashing (Maps, Sets)          | Frequency, uniqueness, pattern finding        |
| KMP Algorithm                 | Pattern Matching (O(n + m))                   |
| Rabin-Karp                    | Pattern Matching using Hashing                |
| Z Algorithm                   | Pattern search in linear time                 |
| Trie (Prefix Tree)            | Dictionary and prefix-based problems          |
| Manacher's Algorithm          | Longest Palindromic Substring (O(n))         |
| Suffix Array / LCP           | Advanced string comparison & sorting          |

---

## 📚 Popular String Problems to Practice

| Problem                                | Concepts                            |
|----------------------------------------|-------------------------------------|
| Valid Anagram                          | Frequency count, Hashmap            |
| Longest Substring Without Repeating    | Sliding Window, HashSet             |
| Longest Palindromic Substring          | DP / Center Expansion               |
| Group Anagrams                         | Hashmap + Sorting                   |
| Count and Say                          | String Construction                 |
| Multiply Strings                       | Manual Multiplication               |
| Edit Distance (Levenshtein Distance)   | Dynamic Programming                 |
| Minimum Window Substring               | Sliding Window + Hashing            |
| Implement strStr() / strstr()          | Pattern Matching                    |
| Roman to Integer / Integer to Roman    | Parsing, Mapping                    |

---

## 🧪 Sample Code (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    s += " world"; // Concatenation
    cout << "String: " << s << endl;
    cout << "Length: " << s.length() << endl;

    for(char c : s) {
        cout << c << " ";
    }

    return 0;
}
## 📁 Folder Structure (if applicable)

```bash
 strings/
├── reverse_string.cpp
├── longest_palindrome.cpp
├── anagram_check.cpp
├── pattern_matching_kmp.cpp
├── minimum_window_substring.cpp
└── README.md