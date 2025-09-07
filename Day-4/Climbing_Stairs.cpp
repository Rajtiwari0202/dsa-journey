#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------
// Approach 1: Recursion (Brute Force)
// ---------------------------------------------------
int climbStairsRec(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    return climbStairsRec(n - 1) + climbStairsRec(n - 2);
}

// ---------------------------------------------------
// Approach 2: Memoization (Top-Down DP)
// ---------------------------------------------------
int solveMemo(int n, vector<int> &dp) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (dp[n] != -1) return dp[n];
    return dp[n] = solveMemo(n - 1, dp) + solveMemo(n - 2, dp);
}
int climbStairsMemo(int n) {
    vector<int> dp(n + 1, -1);
    return solveMemo(n, dp);
}

// ---------------------------------------------------
// Approach 3: Tabulation (Bottom-Up DP)
// ---------------------------------------------------
int climbStairsTab(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// ---------------------------------------------------
// Approach 4: Space Optimized (O(1) Space)
// ---------------------------------------------------
int climbStairsOpt(int n) {
    if (n <= 1) return 1;
    int prev1 = 1, prev2 = 1;
    for (int i = 2; i <= n; i++) {
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main() {
    int n; cin >> n;
    cout << "Recursion: " << climbStairsRec(n) << "\n";
    cout << "Memoization: " << climbStairsMemo(n) << "\n";
    cout << "Tabulation: " << climbStairsTab(n) << "\n";
    cout << "Optimized: " << climbStairsOpt(n) << "\n";
    return 0;
}
