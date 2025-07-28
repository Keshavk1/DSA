# 🔡 Trie (Prefix Tree)

A **Trie** is a tree-like data structure that stores a dynamic set of strings, typically used to **retrieve keys in a dataset of strings** in optimal time.

Each node represents a character of a word. The path from the root to a node represents a **prefix** of a word.

---

## 🧠 Why Use Trie?

- Fast insert/search for words (O(L), where L = word length)
- Ideal for:
  - Auto-complete systems
  - Spell checkers
  - IP routing
  - Word games (Boggle, Word Search)
- Handles **prefix-based queries** efficiently

---

## 🧩 Trie Operations

| Operation | Description | Time Complexity |
|----------|-------------|-----------------|
| Insert    | Add a word into the Trie | O(L) |
| Search    | Check if a word exists   | O(L) |
| StartsWith| Check if any word starts with a prefix | O(L) |

---

## 🔗 Must-Do Trie Problems

| No. | Problem | Link |
|-----|---------|------|
| 1️⃣ | Implement Trie (Prefix Tree) | [Leetcode 208](https://leetcode.com/problems/implement-trie-prefix-tree/) |
| 2️⃣ | Implement Magic Dictionary | [Leetcode 676](https://leetcode.com/problems/implement-magic-dictionary/) |
| 3️⃣ | Replace Words | [Leetcode 648](https://leetcode.com/problems/replace-words/) |
| 4️⃣ | Design Add and Search Words Data Structure | [Leetcode 211](https://leetcode.com/problems/design-add-and-search-words-data-structure/) |
| 5️⃣ | Word Search II | [Leetcode 212](https://leetcode.com/problems/word-search-ii/) |
| 6️⃣ | Longest Word in Dictionary | [Leetcode 720](https://leetcode.com/problems/longest-word-in-dictionary/) |
| 7️⃣ | Palindrome Pairs | [Leetcode 336](https://leetcode.com/problems/palindrome-pairs/) |
| 8️⃣ | Maximum XOR of Two Numbers in Array | [Leetcode 421](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) |
| 9️⃣ | Search Suggestions System | [Leetcode 1268](https://leetcode.com/problems/search-suggestions-system/) |
| 🔟 | Contacts (Hackerrank) | [Hackerrank](https://www.hackerrank.com/challenges/contacts/problem) |

---

## 📁 Folder Structure (if applicable)

```bash
trie/
│
├── implement_trie.cpp
├── magic_dictionary.cpp
├── replace_words.cpp
├── add_search_words.cpp
├── word_search_ii.cpp
├── longest_word_dictionary.cpp
├── palindrome_pairs.cpp
├── max_xor_pair.cpp
├── search_suggestions.cpp
├── contacts_hackerrank.cpp
└── README.md


---

## 💡 Tips

- Each Trie node usually stores:
  - A character
  - A hashmap or array of children
  - A boolean to indicate the end of a word
- For lowercase English letters: use `TrieNode* children[26]`
- Tries are often combined with DFS for advanced word problems (e.g. Word Search II)
- You can enhance Trie with:
  - Frequency counters
  - Word rankings (for search suggestions)

---

> ✨ Mastering Trie helps in solving advanced string problems and gives an edge in system design and competitive programming.
