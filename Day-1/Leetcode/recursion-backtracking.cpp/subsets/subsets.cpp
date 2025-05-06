#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(nums, 0, path, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& result) {
        result.push_back(path);  // Add current subset to result

        for (int i = start; i < nums.size(); i++) {
            path.push_back(nums[i]);  // Include current element
            backtrack(nums, i + 1, path, result);  // Recurse for the next element
            path.pop_back();  // Backtrack: remove last element added
        }
    }
};
