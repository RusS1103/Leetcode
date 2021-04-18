class Solution {
public:
    int minPartitions(const string& n) {
        int result = 0;
        for (int i = 0; i < n.size(); ++i) {
            result = max(result, n[i] - '0');
        }
        return result;
    }
};
