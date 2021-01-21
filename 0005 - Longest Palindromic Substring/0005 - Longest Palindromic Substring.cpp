const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

void findMaxS(const string& s, int first, int end, pair<int, int>& dist) {
    int sizeS = s.size();
    int a = 0, b = 0;
    while (first >= 0 && end < sizeS && s[first] == s[end]) {
        a = first;
        b = end;
        --first;
        ++end;
    }
//    cout << a << " " << b << endl;
    if (dist.second - dist.first < b - a) {
        dist = make_pair(a, b);
    }
}

class Solution {
public:
    string longestPalindrome(const string& s) {
        if (s == "") {
            return {};
        }
        pair<int, int> dist;
        for (int i = 0; i < s.size(); ++i) {
            findMaxS(s, i, i, dist);
        }
        for (int i = 0; i < s.size() - 1; ++i) {
            findMaxS(s, i, i + 1, dist);
        }
        string result = "";
//    cout << dist.first << " " << dist.second << endl;
        for (int i = dist.first; i <= dist.second; ++i) {
            result += s[i];
        }
        return result;
    }
};
