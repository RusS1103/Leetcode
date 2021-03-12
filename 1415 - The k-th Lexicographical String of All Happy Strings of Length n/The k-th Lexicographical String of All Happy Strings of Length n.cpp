class Solution {
public:
    string getHappyString(int n, int k) {
        vector<char> letters = {'a', 'b', 'c'};
        vector<string> result;
        backtrack(result, letters, "", n);
        if (k > result.size()) {
            return "";
        }
        return result[k - 1];
    }
    
    void backtrack(vector<string>& result, vector<char> letters, string path, int n) {
        if (path.size() == n) {
            result.push_back(path);
            return;
        }
        
        for (int i = 0; i < 3; ++i) {
            if (!path.empty()) {
                if (path.back() == letters[i]) {
                    continue;
                }
            }
            path.push_back(letters[i]);
            backtrack(result, letters, path, n);
            path.pop_back();
        }
    }
};
