#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); // Initialize the board with empty spaces
        backtrack(result, board, n, 0, {}, {}, {});
        return result;
    }
    
private:
    void backtrack(vector<vector<string>>& result, vector<string>& board, int n, int row, 
                   unordered_set<int> cols, unordered_set<int> diag1, unordered_set<int> diag2) {
        // If all queens are placed, add the board to the result
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col) {
            // If the column or diagonals are under attack, continue to the next column
            if (cols.count(col) || diag1.count(row - col) || diag2.count(row + col)) {
                continue;
            }

            // Place the queen
            board[row][col] = 'Q';
            cols.insert(col);
            diag1.insert(row - col);
            diag2.insert(row + col);

            // Recursively place queens in the next row
            backtrack(result, board, n, row + 1, cols, diag1, diag2);

            // Backtrack: remove the queen and try the next position
            board[row][col] = '.';
            cols.erase(col);
            diag1.erase(row - col);
            diag2.erase(row + col);
        }
    }
};
