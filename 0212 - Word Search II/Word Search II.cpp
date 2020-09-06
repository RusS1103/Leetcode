class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> result;
        unordered_map<char, unordered_set<string>> wordMap;
        unordered_set<string> found;
        for (string& word : words) {
            wordMap[word.back()].insert(word);
        }
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (wordMap.count(board[i][j]) == 1)
                    for (string currentWord : wordMap[board[i][j]]) {
                        int letter_index = currentWord.size() - 1;
                        if (!found.count(currentWord) && currentWord[currentWord.size() - 1] == board[i][j] 
                            && dfs(board, currentWord, i, j, letter_index)) {  
                            result.push_back(currentWord);
                            found.insert(currentWord);
                        }
                    }
                }
        }
        return result;
    }
    
    
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int letter_index) {
        if (letter_index == -1) {
            return true;
        }
        int n = board.size();
        int m = board[0].size();
        
        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[letter_index]) {
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = ' ';
        bool flag = dfs(board, word, i + 1, j, letter_index - 1) ||
            dfs(board, word, i, j + 1, letter_index - 1) ||
            dfs(board, word, i - 1, j, letter_index - 1) ||
            dfs(board, word, i, j - 1, letter_index - 1);
        
        board[i][j] = temp;
        return flag;
    }
};
