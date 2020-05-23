const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

bool cmp(const string& first, const string& second) {
    return first + second < second + first;
}

class Solution {
public:

    string largestNumber(vector<int>& nums) {
        string str = "";
        vector<string> result;
        for (auto& now : nums) {
            string temp = to_string(now);
            result.push_back(temp);
        }
        sort(result.rbegin(), result.rend(), cmp);
        bool flag = false;
        for (auto now : result) {
            if (now != "0") {
                flag = true;
            }
            str += now;
        }
        return flag ? str : "0";
    }
};
