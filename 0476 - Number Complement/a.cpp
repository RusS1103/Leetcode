class Solution {
public:
    int findComplement(int num) {
        string bit_exp = "";
        uint32_t mask = 1;
        for (int i = 1; i <= 32; ++i) {
            if (mask & num) {
                bit_exp += "1";
            } else {
                bit_exp += "0";
            }
            mask <<= 1;
        }
        reverse(bit_exp.begin(), bit_exp.end());
        int i = 0;
        while (bit_exp[i] != '1') {
            ++i;
        }
        for (int j = i; j < bit_exp.size(); ++j) {
            if (bit_exp[j] == '0') {
                bit_exp[j] = '1';
            } else {
                bit_exp[j] = '0';
            }
        }
        reverse(bit_exp.begin(), bit_exp.end());
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            if (bit_exp[i] == '1') {
                res += pow(2, i);
            }
        }
        return res;
    }
};
