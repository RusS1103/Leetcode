const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool detectCapitalUse(const string& word) {
        int n = word.size();
        if (n == 1) {
            return true;
        }
        if ('a' <= word[0] && word[0] <= 'z') {
            for (int i = 1; i < n; ++i) {
                if (!('a' <= word[i] && word[i] <= 'z')) {
                    return false;
                }
           }
        } else {
            if ('a' <= word[1] && word[1] <= 'z') {
                for (int i = 2; i < n; ++i) {
                    if (!('a' <= word[i] && word[i] <= 'z')) {
                        return false;
                    }
                }
            } else {
                if ('A' <= word[1] && word[1] <= 'Z') {
                    for (int i = 2; i < n; ++i) {
                        if (!('A' <= word[i] && word[i] <= 'Z')) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
