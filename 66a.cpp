class Solution {
public:
   vector<int> plusOne(vector<int>& digits) {
    vector<int> total = {1};
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        if (*it != 9) {
            ++*it;
            return digits;
        } else {
            *it = 0;
        }
    }
    total.insert(total.end(), digits.begin(), digits.end());
    return total;
    }
};
