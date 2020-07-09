class Solution {
public:
    string licenseKeyFormatting(string& S, int K) {
        for (int i = 0; i < S.size(); ++i) {
            if ('a' <= S[i] and S[i] <= 'z') {
                S[i] = S[i] - 'a' + 'A';
            }
        }
        string temp = "";
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] != '-') {
                temp += S[i];
            } 
        }
        if (temp.size() == 0) {
            return {};
        }
        int begin = temp.size() % K;
        string result = "";
        if (temp.size() != K && begin != 0) {
            for (int i = 0; i < begin; ++i) {
                result += temp[i];
            }
            result += "-";
        }
        for (int i = begin; i < temp.size(); i += K) {
            int start = i;
            int end = i + K;
            while (start < end) {
                result += temp[start];
                ++start;
            }
            result += "-";
        }
        return {result.begin(), prev(result.end())};
    }
};
