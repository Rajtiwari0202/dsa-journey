#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------
// Approach 1: Brute Force O(n^2)
// ---------------------------------------------------
int maxSubArrayBrute(vector<int>& nums) {
    int n = nums.size();
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int currSum = 0;
        for (int j = i; j < n; j++) {
            currSum += nums[j];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

// ---------------------------------------------------
// Approach 2: Kadane’s Algorithm O(n)
// ---------------------------------------------------
int maxSubArrayKadane(vector<int>& nums) {
    int maxSum = nums[0];
    int currSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Brute Force: " << maxSubArrayBrute(nums) << "\n";
    cout << "Kadane: " << maxSubArrayKadane(nums) << "\n";
    return 0;
}
