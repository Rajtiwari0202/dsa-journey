#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }
    
private:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        // If we've reached the end of the array, we have a valid permutation
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        for (int i = start; i < nums.size(); ++i) {
            // Swap the current element with the element at index `start`
            swap(nums[start], nums[i]);
            
            // Recurse for the next element
            backtrack(nums, start + 1, result);
            
            // Backtrack: swap the elements back
            swap(nums[start], nums[i]);
        }
    }
};

