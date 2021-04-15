class Solution {
public:
    string getPermutation(int n, int k) {
        string temp = "";
        for (int i = 1; i <= n; ++i) {
            temp += to_string(i);
        }
        for (int i = 0; i < k - 1; ++i) {
            next_permutation(temp.begin(), temp.end());
        }
        return temp;
    }
};
