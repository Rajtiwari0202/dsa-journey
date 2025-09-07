#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int i, vector<int> &dp) {
    if (i < 0) return 0;
    if (dp[i] != -1) return dp[i];
    return dp[i] = max(nums[i] + solve(nums, i - 2, dp), solve(nums, i - 1, dp));
}

int rob(vector<int> &nums) {
    vector<int> dp(nums.size(), -1);
    return solve(nums, nums.size() - 1, dp);
}

int main() {
    vector<int> nums = {2,7,9,3,1};
    cout << rob(nums);
    return 0;
}
