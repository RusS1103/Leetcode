
class Solution {
public:
    int uniquePaths(int m, int n) {
    size_t res = 1;
    int k = 1;
    if (m < n) {
        int a = m;
        m = n;
        n = a;
    }
    for (size_t i = m; i <= m + n - 2; ++i) {
        res *= i;
        res /= k;
        ++k;
    }
    return res;
    }
};
