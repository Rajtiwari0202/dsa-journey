#include <bits/stdc++.h>
using namespace std;

int robRec(vector<int> &nums, int i) {
    if (i < 0) return 0;
    return max(nums[i] + robRec(nums, i - 2), robRec(nums, i - 1));
}

int main() {
    vector<int> nums = {2,7,9,3,1};
    cout << robRec(nums, nums.size() - 1);
    return 0;
}
