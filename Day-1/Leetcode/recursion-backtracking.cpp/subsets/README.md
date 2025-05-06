# Leetcode 78. Subsets

**Difficulty**: Medium  
**Problem Link**: [https://leetcode.com/problems/subsets/](https://leetcode.com/problems/subsets/)

---

## ❓ Problem Statement

Given an integer array `nums` of **unique** elements, return all possible subsets (the power set).

The solution set must **not** contain duplicate subsets. Return the solution in any order.

---

## 🔍 Constraints

- `1 <= nums.length <= 10`
- `-10 <= nums[i] <= 10`
- All elements of `nums` are **unique**

---

## 💡 Approach (Backtracking)

We use backtracking to explore all possible combinations by either **including** or **excluding** each element.

- Start with an empty subset and at each step decide:
  - Include the current number
  - Skip the current number
- Recurse until you reach the end of the array.
- This naturally generates all subsets.

---

## 🧠 Time and Space Complexity

- **Time Complexity**: `O(2^n)` — For `n` elements, we have `2^n` possible subsets.
- **Space Complexity**: `O(2^n * n)` — Total subsets and each can have up to `n` elements.

---

## ✅ Sample Input & Output

Input: nums = [1,2,3]
Output: [[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]


---

## 📁 Files

- `subsets.cpp`: C++ backtracking solution with comments.
