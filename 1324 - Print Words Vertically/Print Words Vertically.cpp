const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<string> printVertically(const string& str) {
        vector<string> words;
        stringstream ss(str);
        int max_str = 0;
        string s;
        vector<string> result;
        while (ss >> s) {
            if (s.size() >= max_str) {
                max_str = s.size();
            }
            words.push_back(move(s));
        } 
        vector<vector<char>> matrix(max_str, vector<char>(words.size(), ' '));
        int j = 0;
        for (auto& word : words) {
            for (int i = 0; i < word.size(); ++i) {
                matrix[i][j] = word[i];
            }
            ++j;
        }          
        for (int i = 0; i < matrix.size(); ++i) {
            string temp = "";
            for (int j = 0; j < matrix[0].size(); ++j) {
                temp += matrix[i][j];
            }
            result.push_back(temp);
        }
        for (auto& now : result) {
            auto end = now.find_last_not_of(' ');
            now = now.substr(0, end + 1);
        }
        return result;
    }
};
