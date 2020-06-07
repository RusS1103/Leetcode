const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int trailingZeroes(int n) {
        int sum = 0;
        while (n > 0) {
            n /= 5;
            sum += n;
        }
        return sum;
    }
};
