#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------
// Approach 1: Recursion
// ---------------------------------------------------
int robRec(vector<int> &nums, int i) {
    if (i < 0) return 0;
    return max(nums[i] + robRec(nums, i - 2), robRec(nums, i - 1));
}

// ---------------------------------------------------
// Approach 2: Memoization
// ---------------------------------------------------
int solveMemo(vector<int> &nums, int i, vector<int> &dp) {
    if (i < 0) return 0;
    if (dp[i] != -1) return dp[i];
    return dp[i] = max(nums[i] + solveMemo(nums, i - 2, dp), solveMemo(nums, i - 1, dp));
}
int robMemo(vector<int> &nums) {
    vector<int> dp(nums.size(), -1);
    return solveMemo(nums, nums.size() - 1, dp);
}

// ---------------------------------------------------
// Approach 3: Tabulation
// ---------------------------------------------------
int robTab(vector<int> &nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    }
    return dp[n - 1];
}

// ---------------------------------------------------
// Approach 4: Space Optimized
// ---------------------------------------------------
int robOpt(vector<int> &nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    int prev1 = max(nums[0], nums[1]);
    int prev2 = nums[0];
    for (int i = 2; i < n; i++) {
        int cur = max(nums[i] + prev2, prev1);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main() {
    vector<int> nums = {2,7,9,3,1};
    cout << "Recursion: " << robRec(nums, nums.size() - 1) << "\n";
    cout << "Memoization: " << robMemo(nums) << "\n";
    cout << "Tabulation: " << robTab(nums) << "\n";
    cout << "Optimized: " << robOpt(nums) << "\n";
    return 0;
}
