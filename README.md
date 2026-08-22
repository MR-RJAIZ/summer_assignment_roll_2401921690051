# 🚀 Data Structures & Algorithms (DSA) Master Repository

Welcome to my DSA repository! This project serves as a centralized hub for tracking my progress, mastering algorithmic patterns, and storing optimized solutions to problems from LeetCode, Codeforces, and GeeksforGeeks.

---

## 📌 Repository Roadmap

Below is the structure of the topics covered in this repository. Each section includes a curated list of essential concepts and core problems.

```text
📂 DSA-Repository/
├── 📂 01-Arrays/
├── 📂 02-Strings/
├── 📂 03-Binary-Search/
├── 📂 04-Stack/
├── 📂 05-Queue/
└── 📂 06-Linked-List/
```

---

## ⚡ Topic-Wise Overview & Cheat Sheet

### 1. 📊 Arrays
Arrays are contiguous memory blocks. Focus is placed on pointers, sliding windows, and in-place manipulations.
* **Core Patterns:** Two Pointers, Sliding Window, Prefix Sum, Kadane's Algorithm, Dutch National Flag.
* **Time Complexities:** Access: $O(1)$ | Search/Insert/Delete: $O(N)$.

### 2. 🔤 Strings
Strings are arrays of characters. Key challenges involve pattern matching, substrings, and anagrams.
* **Core Patterns:** KMP Algorithm, Rabin-Karp, Sliding Window, Two-Pointer palindromes, Frequency Arrays.
* **Time Complexities:** Manipulation depends heavily on immutable vs mutable language properties.

### 3. 🔍 Binary Search
A divide-and-conquer strategy optimized for sorted search spaces.
* **Core Patterns:** Search Space Reduction, Binary Search on Answer (Monotonic Functions), Lower/Upper Bounds.
* **Time Complexities:** Search: $O(\log N)$ | Space: $O(1)$.

### 4. 🥞 Stack
A Last-In, First-Out (LIFO) structure essential for parsing, backtracks, and tracking state histories.
* **Core Patterns:** Monotonic Stack (Next Greater Element), Parentheses Matching, Expression Evaluation (Infix/Postfix).
* **Time Complexities:** Push/Pop/Peek: $O(1)$.

### 5. 🎟️ Queue
A First-In, First-Out (FIFO) structure fundamental for ordering operations and graph explorations.
* **Core Patterns:** Monotonic Queue (Sliding Window Maximum), Breadth-First Search (BFS) foundations, Deque usage.
* **Time Complexities:** Enqueue/Dequeue: $O(1)$.

### 6. 🔗 Linked List
A linear collection of data elements where order is defined by pointers rather than memory placement.
* **Core Patterns:** Fast & Slow Pointers (Tortoise & Hare), Sentinel Nodes, Link Reversal, Merging Lists.
* **Time Complexities:** Access/Search: $O(N)$ | Insertion/Deletion (at known node): $O(1)$.

---

## 📝 Problem Tracking Matrix

Use this table to map out and track your solved problems across LeetCode, HackerRank, etc.

| Topic | Problem Name | Difficulty | Pattern Used | Solution Link |
| :--- | :--- | :--- | :--- | :--- |
| **Array** | Two Sum | 🟢 Easy | Two Pointers / Hash Map | [Code](./01-Arrays/two_sum.cpp) |
| **Array** | Maximum Subarray | 🟡 Medium | Kadane's Algorithm | [Code](./01-Arrays/max_subarray.cpp) |
| **String** | Valid Palindrome | 🟢 Easy | Two Pointers | [Code](./02-Strings/valid_palindrome.cpp) |
| **Binary Search** | Find First & Last Position | 🟡 Medium | Lower & Upper Bound | [Code](./03-Binary-Search/first_last_pos.cpp) |
| **Stack** | Valid Parentheses | 🟢 Easy | LIFO Matching | [Code](./04-Stack/valid_parentheses.cpp) |
| **Queue** | Implement Queue using Stacks | 🟢 Easy | Amortized $O(1)$ push/pop | [Code](./05-Queue/queue_via_stacks.cpp) |
| **Linked List** | Linked List Cycle | 🟢 Easy | Fast & Slow Pointers | [Code](./06-Linked-List/cycle_detection.cpp) |

---

## 🛠️ How to Use This Repository

1. **Clone the Repo:**
   ```bash
   git clone https://github.com
   ```
2. **Navigate to a Topic:**
   ```bash
   cd 03-Binary-Search
   ```
3. **Run a Solution (e.g., C++):**
   ```bash
   g++ -std=c++17 solution.cpp -o solution && ./solution
   ```

## 📈 Goals & Progress
* [ ] Master 5 core patterns per data structure.
* [ ] Maintain clean, documented code with Time & Space complexities listed at the top of every file.
* [ ] Complete **150+** curated standard interview problems.
* [ ] Try to maintain regularity in problem solving .
