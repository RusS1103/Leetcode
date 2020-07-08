class Solution {
public:
    int arrangeCoins(int n) {
        long l = 0, r = n;
        while (l <= r) {
            long mid = l + (r - l) / 2;
            long sum = mid * (mid + 1) / 2;
            if (sum == n) {
                return mid;
            } else if (sum > n) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
};
