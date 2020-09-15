const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string reverseVowels(const string& s) {
        string result = "";
        vector<char> vowels;
        for (auto c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels.push_back(c);
            }
        }
        reverse(vowels.begin(), vowels.end());
        int k = 0;
        for (auto& c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                result += vowels[k];
                ++k;
            } else {
                result += c;
            }
        }
        return result;
    }
};
