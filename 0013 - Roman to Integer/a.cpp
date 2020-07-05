const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int romanToInt(const string& s) {
        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'I') {
                if (i + 1 != s.size()) {
                    if (s[i + 1] == 'V') {
                        sum += 4;
                        ++i;
                        continue;
                    } else if (s[i + 1] == 'X') {
                        sum += 9;
                        ++i;
                        continue;
                    } 
                }
                sum += 1;
            } else if (s[i] == 'X') {
                if (i + 1 != s.size()) {
                    if (s[i + 1] == 'L') {
                        sum += 40;
                        ++i;
                        continue;
                    } else if (s[i + 1] == 'C') {
                        sum += 90;
                        ++i;
                        continue;
                    }
                }
                sum += 10;
            } else if (s[i] == 'C') {
                if (i + 1 != s.size()) {
                    if (s[i + 1] == 'D') {
                        sum += 400;
                        ++i;
                        continue;
                    } else if (s[i + 1] == 'M') {
                        sum += 900;
                        ++i;
                        continue;
                    }
                }
                sum += 100;
            } else if (s[i] == 'V') {
                sum += 5;
            } else if (s[i] == 'L') {
                sum += 50;
            } else if (s[i] == 'D') {
                sum += 500;
            } else if (s[i] == 'M') {
                sum += 1000;
            }
        }
        return sum;
    }
};
