#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        backtrack(candidates, target, 0, combination, result);
        return result;
    }
    
private:
    void backtrack(vector<int>& candidates, int target, int start, 
                   vector<int>& combination, vector<vector<int>>& result) {
        // If target is 0, we've found a valid combination
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        
        // If target becomes negative, no valid combination exists
        if (target < 0) {
            return;
        }

        // Try each candidate starting from the current index `start`
        for (int i = start; i < candidates.size(); ++i) {
            // Add the current candidate to the combination
            combination.push_back(candidates[i]);
            
            // Recursively try to form the combination with reduced target
            backtrack(candidates, target - candidates[i], i, combination, result);
            
            // Backtrack: remove the last element and try the next candidate
            combination.pop_back();
        }
    }
};
