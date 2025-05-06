# Leetcode 39. Combination Sum

**Difficulty**: Medium  
**Problem Link**: [https://leetcode.com/problems/combination-sum/](https://leetcode.com/problems/combination-sum/)

---

## ❓ Problem Statement

Given a list of positive integers `candidates` and a target number `target`, return all unique combinations of candidates that sum up to target.

You may use the same number **multiple times**.

---

## 🔍 Constraints

- `1 <= candidates.length <= 30`
- `1 <= candidates[i] <= 200`
- All numbers are **positive**
- The same number can be used **unlimited times**

---

## 💡 Approach (Backtracking)

We use backtracking to explore:
- Include current number (don’t move index forward, reuse)
- Exclude current number (move index forward)
- Stop when:
  - target == 0 → valid path
  - target < 0 → prune

Sort the input array to optimize and prune unnecessary paths early.

---

## 🧠 Time and Space Complexity

- **Time Complexity**: `O(2^t)` — t = target, exponential due to combinations
- **Space Complexity**: `O(k)` — Where `k` is the average length of combinations in the result

---

## ✅ Sample Input & Output


Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]


---

## 📁 Files

- `Combination-sum.cpp`: Recursive backtracking implementation with pruning and comments.