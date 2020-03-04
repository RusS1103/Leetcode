const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t mask = 1;
    int bits = 0;
    string s = "";
    for (size_t i = 0; i < 32; ++i) {
        if ((n & mask) != 0) {
            ++bits;
            s += "1";
        } else {
            s += "0";
        }
        mask <<= 1;
    }
    uint32_t sum = 0;
    for (size_t i = 0; i < 32; ++i) {
        if (s[i] == '1') {
            sum += pow(2, 32 - i - 1);
        }
    }
    return sum;
    }
};
