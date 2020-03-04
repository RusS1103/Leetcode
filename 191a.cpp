const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask = 1;
        int bits = 0;
        for (size_t i = 0; i < 32; ++i) {
            if ((n & mask) != 0) {
                ++bits;
            }
            mask <<= 1;
        }
        return bits;
    }
};
