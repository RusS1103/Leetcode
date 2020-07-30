class Solution {
public:
    int numSquares(int n) {
        if (isPerfect(n)) {
            return 1;
        }
        while (n % 4 == 0) {
            n /= 4;
        }
        if (n % 8 == 7) {
            return 4;
        }
        for (int i = 1; i <= n; ++i) {
            if (isPerfect(i) && isPerfect(n - i)) {
                return 2;
            }
        }
        return 3;
    }
    
    bool isPerfect(int n) {
        return int(sqrt(n)) * int(sqrt(n)) == n;
    }
};
