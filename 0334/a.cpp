class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }
        int c1 = INT_MAX, c2 = INT_MAX;
        for (auto now : nums) {
            if (now <= c1) {
                c1 = now;
            } else if (now <= c2){
                c2 = now;
            } else {
                return true;
            }
        }
        return false;
    }
};
