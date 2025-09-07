#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
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
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}
