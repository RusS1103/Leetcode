const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        vector<string> numbers = {"0", "1", "abc", "def", "ghi", "jkl", "mno",
                                 "pqrs", "tuv", "wxyz"};
        if (digits.size() == 0) {
            return {};
        }
        backtrack(numbers, result, "", digits, 0);
        return result;
    }
    
    void backtrack(vector<string>& numbers, vector<string>& result, string path, string digits, int index) {
        if (path.size() == digits.size()) {
            result.push_back(path);
            return;
        }
        
        string letter = numbers[digits[index] - '0'];
        for (int i = 0; i < letter.size(); ++i) {
            backtrack(numbers, result, path + letter[i], digits, index + 1);
        }
    }
};
