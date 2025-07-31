class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool result = true;
        unordered_set<char> row[9];
        unordered_set<char> column[9];
        unordered_set<char> box[9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                char value = board[i][j];
                int block = (i / 3) * 3 + (j / 3);
                if (row[i].count(value) || column[j].count(value) || box[block].count(value)) {
                    result = false;
                }
                row[i].insert(value);
                column[j].insert(value);
                box[block].insert(value);
            }
        }
        return result;
    }
};