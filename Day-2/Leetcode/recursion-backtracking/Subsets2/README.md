# Leetcode 90 – Subsets II

## 🔗 Problem Link:
[Leetcode 90 - Subsets II](https://leetcode.com/problems/subsets-ii/)

## 🧠 Problem Summary:
Given a collection of integers that might contain duplicates, return all possible subsets **(the power set)**.  
The solution set **must not contain duplicate subsets**.

### Example:
**Input:** `[1,2,2]`  
**Output:** `[[],[1],[1,2],[1,2,2],[2],[2,2]]`

---

## ✅ Approach: Backtracking with Duplicate Skipping

We use **recursive backtracking** to generate subsets.  
To avoid duplicate subsets:
- We **sort** the input array to group duplicates.
- During backtracking, if the current element is the same as the previous one **at the same recursion depth**, we **skip** it.

### ⚙️ Steps:
1. **Sort** the array.
2. Use a **for-loop** to explore each element starting from `start`.
3. **Skip** duplicates by checking `if (i > start && nums[i] == nums[i - 1])`.
4. Build paths recursively and backtrack as needed.

---

## 🧪 Test Cases

| Input        | Output |
|--------------|--------|
| [1,2,2]      | `[[],[1],[1,2],[1,2,2],[2],[2,2]]` |
| [0]          | `[[], [0]]` |
| [4,4,4,1,4]  | All unique subsets only |

---

## 🛠️ Complexity

- **Time Complexity:** `O(2^n)` in the worst case
- **Space Complexity:** `O(n)` for the recursion stack

---

## ✍️ Author:
Solution implemented by [@Rajtiwari0202](https://github.com/Rajtiwari0202)

