# Leetcode 51. N-Queens

**Difficulty**: Hard  
**Problem Link**: [https://leetcode.com/problems/n-queens/](https://leetcode.com/problems/n-queens/)

---

## ❓ Problem Statement

The N-Queens puzzle is the problem of placing `n` chess queens on an `n x n` chessboard so that no two queens attack each other.

Return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

---

## 🔍 Constraints

- `1 <= n <= 9`

---

## 💡 Approach (Backtracking)

We place queens row by row, making sure:
- No two queens share the same column
- No two queens share the same diagonal

For each row, try placing a queen in each column and:
- If it’s valid (safe), move to next row recursively
- Backtrack by removing the queen if it leads to a dead-end

Used 3 hash sets to keep track of:
- Columns used
- Main diagonals
- Anti-diagonals

---

## 🧠 Time and Space Complexity

- **Time Complexity**: `O(N!)` — Because we try N options for each queen and prune invalid cases.
- **Space Complexity**: `O(N^2)` — For storing the board and recursion stack.

---

## ✅ Sample Input & Output

Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."], ["..Q.","Q...","...Q",".Q.."]]


---

## 📁 Files

- `N-Queens.cpp`: Full C++ implementation with backtracking and pruning.
