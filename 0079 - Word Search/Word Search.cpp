const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool exist(vector<vector<char>>& board, string& word) {
        if (board.size() == 0) {
            return false;
        }
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == word[0] && dfs(board, 0, i, j, word)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, int count, int i, int j, string& word) {
        if (count == word.size()) {
            return true;
        }
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[count]) {
            return false;
        }
        
        
        char temp = board[i][j];
        board[i][j] = ' ';
        
        bool flag = dfs(board, count + 1, i + 1, j, word) || 
            dfs(board, count + 1, i - 1, j, word) ||
            dfs(board, count + 1, i, j - 1, word) ||
            dfs(board, count + 1, i, j + 1, word);
        
        board[i][j] = temp;
        return flag;
    }
};
