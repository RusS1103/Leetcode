const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //checking blocks
        for (int i = 0; i < 9; ++i) {
            bool isNum[10];
            for (int e = 0; e < 10; ++e) {
                isNum[e] = false;
            }
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    if (isNum[board[i][j] - '0']) {
                        return false;
                    }
                    else 
                        isNum[board[i][j] - '0'] = true;
                }
            }
        }
        for (int i = 0; i < 9; ++i) {
            bool isNum[10];
            for (int e = 0; e < 10; ++e) {
                isNum[e] = false;
            }
            for (int j = 0; j < 9; ++j) {
                if (board[j][i] != '.') {
                    if (isNum[board[j][i] - '0']) {
                        return false;
                    }
                    else 
                        isNum[board[j][i] - '0'] = true;
                }
            }
        }
        for (int k = 0; k < 9; k += 3) {
            for (int l = 0; l < 9; l += 3) {
                bool isNum[10];
                for (int e = 0; e < 10; ++e) {
                    isNum[e] = false;
                }
                for (int i = k; i < k + 3; ++i) {
                    for (int j = l; j < l + 3; ++j) {
                        if (board[i][j] != '.') {
                            if (isNum[board[i][j] - '0']) {
                            return false;
                        }
                        else 
                            isNum[board[i][j] - '0'] = true;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
