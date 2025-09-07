#include <bits/stdc++.h>
using namespace std;

int climbStairsRec(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    return climbStairsRec(n - 1) + climbStairsRec(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << climbStairsRec(n);
    return 0;
}
