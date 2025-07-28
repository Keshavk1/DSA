# 🧮 Math & Bit Manipulation in Data Structures and Algorithms

Mathematics and Bit Manipulation are powerful tools in DSA. They help solve complex problems with high efficiency and minimal space, especially in optimization, number theory, and low-level operations.

---

## 🔢 MATH IN DSA

### 📘 Core Concepts

| Concept                   | Description                              |
|---------------------------|------------------------------------------|
| Prime Numbers             | Check, count, or generate primes         |
| GCD / LCM                 | Euclidean Algorithm                      |
| Modular Arithmetic        | Used to avoid overflow, especially in CP |
| Factorial / nCr           | Combinatorics, DP                        |
| Logarithms                | Helps reduce time complexity             |
| Power Functions           | Fast Exponentiation                      |
| Number Properties         | Even/odd, divisibility, digit sum, etc. |

---

### ⚙️ Common Techniques

- **Sieve of Eratosthenes**: Efficient prime generation up to `n` — O(n log log n)
- **Binary Exponentiation**: Compute a^b in O(log b)
- **Prefix Sum**: Sum of subarrays — O(1) query time
- **Modular Inverse**: Often used in combinatorics
- **GCD Using Euclidean Algorithm**:

```cpp
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
## 📁 Folder Structure (if applicable)

```bash
math_bit/
├── gcd.cpp
├── sieve.cpp
├── fast_exponentiation.cpp
├── modular_inverse.cpp
├── count_set_bits.cpp
├── power_of_two.cpp
├── subsets_using_bits.cpp
└── README.md
