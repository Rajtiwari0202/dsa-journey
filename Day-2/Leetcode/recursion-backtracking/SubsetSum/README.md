# 🧠 Subset Sum Problem — Leetcode 416

## 📝 Problem Statement
Given an integer array `nums`, return `true` if you can partition the array into two subsets such that the sum of elements in both subsets is equal.

### 🧪 Example:

Input: nums = [1, 5, 11, 5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].


---

## 🚀 Approach: Backtracking + Optimization

### 💡 Idea:
The task reduces to checking if there's a subset in the array that sums up to `target = totalSum / 2`. If such a subset exists, the remaining elements will form the other half.

### 🔍 Steps:
1. First, calculate the total sum.
2. If it's odd, return false — no equal partition possible.
3. Else, apply recursive backtracking to check if a subset adds up to `totalSum / 2`.
4. (Optional) Add memoization for optimization.

---

## ⚙️ Time & Space Complexity

- **Time Complexity:** `O(2^n)` for pure recursion  
- **Optimized with Memoization:** `O(n * target)`  
- **Space Complexity:** `O(n * target)` for memoization table

---

## 💻 Code Used:
```cpp
bool canPartition(vector<int>& nums) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    if (total % 2 != 0) return false;
    int target = total / 2;
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));

    function<bool(int, int)> dfs = [&](int i, int sum) {
        if (sum == 0) return true;
        if (i >= n || sum < 0) return false;
        if (dp[i][sum] != -1) return dp[i][sum];
        return dp[i][sum] = dfs(i + 1, sum - nums[i]) || dfs(i + 1, sum);
    };

    return dfs(0, target);
}

📘 Concepts Used:

    Recursion & Backtracking

    Subset Sum Logic

    0/1 Knapsack Thinking

    Memoization (Top-Down DP)