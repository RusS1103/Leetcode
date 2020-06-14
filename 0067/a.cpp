class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int minS = min(a.size(), b.size());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        for (int i = 0; i < minS; ++i) {
            if (a[i] == '1' && b[i] == '1') {
                if (carry == 1) {
                    result += "1";
                    carry = 1;
                } else {
                    result += "0";
                    carry = 1;
                }
            } else if (a[i] == '1' && b[i] == '0' || a[i] == '0' && b[i] == '1') {
                if (carry == 1) {
                    result += "0";
                    carry = 1;
                } else {
                    result += "1";
                    carry = 0;
                }
            } else {
                if (carry == 1) {
                    result += "1";
                    carry = 0;
                } else {
                    result += "0";
                    carry = 0;
                }
            }
        }
        string temp = "";
        if (a.size() > minS) {
            temp = a;
        } else if (b.size() > minS){
            temp = b;
        }
        for (int i = minS; i < max(a.size(), b.size()); ++i) {
            if (temp[i] == '0') {
                if (carry == 1) {
                    result += '1';
                    carry = 0;
                } else {
                    result += '0';
                    carry = 0;
                }
            } else if (temp[i] == '1') {
                if (carry == 1) {
                    result += "0";
                    carry = 1;
                } else if (carry == 0) {
                    result += "1";
                    carry = 0;
                }
            }
        }
        if (carry == 1) {
            result += "1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
