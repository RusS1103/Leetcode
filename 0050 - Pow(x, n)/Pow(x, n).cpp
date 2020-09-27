class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        } else if (n > 0) {
            if (n % 2 == 0) {
                return myPow(x * x, n / 2);
            } else {
                return myPow(x, n - 1) * x;
            }
        } else {
            if (n % 2 == 0) {
                return myPow(x * x, n / 2);
            } else {
                return myPow(x, n + 1) / x;
            }
        }
    }
};
