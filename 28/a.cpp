const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int strStr(string haystack, string needle) {
         if (needle.size() > haystack.size()) {
            return -1;
        } else if (needle.size() == haystack.size()) {
            if (haystack == needle) {
                return 0;
            } else {
                return -1;
            }
        } else {
            auto left = haystack.begin();
            auto right = next(left, needle.size());
            while (right != haystack.end()) {
                if (string(left, right) == needle) {
                    return distance(haystack.begin(), left);
                }
                ++left;
                right = next(left, needle.size());
            }
            if (string(left, right) == needle) {
                return distance(haystack.begin(), left);
            }
            return -1;
        }
        return {};
    }
};
