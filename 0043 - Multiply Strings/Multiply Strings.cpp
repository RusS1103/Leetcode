const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        string result = "";
        vector<int> temp(n + m, 0);
        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int sum = temp[i + j + 1] + product;
                temp[i + j] += sum / 10;
                temp[i + j + 1] = sum % 10;
            }
        }
        for (int i = 0; i < temp.size(); ++i) {
            if (i == 0 && temp[i] == 0) {}
            else {
                result += to_string(temp[i]);
            }
        }
        bool flag = false;
        for (auto now : temp) {
            if (now != 0) {
                flag = true;
            }
        }
        return flag ? result : "0";
    }
};
