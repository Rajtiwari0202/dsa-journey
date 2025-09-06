#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size(), cols = board[0].size();
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (dfs(board, r, c, word, 0)) return true;
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, int r, int c, string &word, int index) {
        if (index == word.size()) return true; // all chars matched
        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || board[r][c] != word[index])
            return false;

        char temp = board[r][c];
        board[r][c] = '#'; // mark visited

        // explore 4 directions
        bool found = dfs(board, r + 1, c, word, index + 1) ||
                     dfs(board, r - 1, c, word, index + 1) ||
                     dfs(board, r, c + 1, word, index + 1) ||
                     dfs(board, r, c - 1, word, index + 1);

        board[r][c] = temp; // backtrack
        return found;
    }
};

int main() {
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";

    Solution sol;
    bool ans = sol.exist(board, word);

    cout << "Word \"" << word << "\" exists in board? " << (ans ? "Yes" : "No") << "\n";
    return 0;
}
