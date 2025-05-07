# 🧮 Combination Sum II - Leetcode 40

## 📝 Problem Statement

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find **all unique combinations** in `candidates` where the numbers sum to `target`.  
Each number in `candidates` **may only be used once** in the combination.  
**The solution set must not contain duplicate combinations.**

### 👉 Constraints:
- All numbers (including `target`) are positive integers.
- Candidates may contain **duplicates**.
- You can use each number **at most once**.

### 🔗 Leetcode Link:  
[Combination Sum II – Leetcode 40](https://leetcode.com/problems/combination-sum-ii/)

---

## 🚀 Approach: Backtracking

This problem is a classic example of recursion with backtracking where we:
1. Sort the array to handle duplicates.
2. Use a recursive function to try including or skipping each candidate.
3. Skip duplicate elements by checking `candidates[i] == candidates[i-1]` during the same recursive level.
4. Ensure we don’t reuse the same element more than once by increasing the index for each recursive call.

---

## 🧠 Key Observations

- Sorting helps group duplicates and handle them efficiently.
- Backtracking allows us to explore every possible path and back out when a path doesn't lead to the solution.
- We track and skip duplicates at the **same recursion depth** to avoid repeated subsets.

---

## 📦 Example

```cpp
Input: candidates = [10,1,2,7,6,1,5], target = 8

After sorting: [1,1,2,5,6,7,10]

Output:
[
  [1,1,6],
  [1,2,5],
  [1,7],
  [2,6]
]

Code file CombinationSum2.cpp

he file contains:

    Recursive backtracking implementation

    Sorted input handling

    Duplicate combination avoidance

✅ Time & Space Complexity

    Time Complexity: O(2^n) in the worst case due to recursion.

    Space Complexity: O(k) where k is the average length of a combination path.

🔥 Learnings

    Efficient duplicate handling is key when recursion is involved.

    Pre-sorting input can simplify many recursive problems.

    Mastering backtracking builds the foundation for more advanced topics like DP and constraint satisfaction problems.

