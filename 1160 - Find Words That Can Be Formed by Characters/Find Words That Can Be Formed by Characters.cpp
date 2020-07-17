const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int countCharacters(vector<string>& words, string& chars) {
        unordered_map<char, int> temp;
        for (auto c : chars) {
            ++temp[c];
        }
        int result = 0;
        for (auto& word : words) {
            bool flag = true;
            unordered_map<char, int> hash = temp;
            for (int i = 0; i < word.size(); ++i) {
                if (hash[word[i]] == 0) {
                    flag = false;
                }
                --hash[word[i]];
            }
            result += flag ? word.size() : 0;
        }
        return result;
    }
};
