# Leetcode 46. Permutations

**Difficulty**: Medium  
**Problem Link**: [https://leetcode.com/problems/permutations/](https://leetcode.com/problems/permutations/)

---

## ❓ Problem Statement

Given an array `nums` of distinct integers, return **all possible permutations**.

---

## 🔍 Constraints

- `1 <= nums.length <= 6`
- `-10 <= nums[i] <= 10`
- All the integers are **unique**

---

## 💡 Approach (Backtracking + Swapping)

We use backtracking with **in-place swapping**:
- Fix the first index, and recursively permute the rest
- Swap elements at each recursive level to generate new permutations
- Backtrack (swap back) after exploring

Alternative approach: use a visited boolean array + path vector

---

## 🧠 Time and Space Complexity

- **Time Complexity**: `O(n!)` — There are `n!` permutations
- **Space Complexity**: `O(n)` — For the recursion stack and temporary list

---

## ✅ Sample Input & Output

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,2,1],[3,1,2]]


---

## 📁 Files

- `permuations.cpp`: Backtracking solution with in-place swapping and comments.