const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool canJump(const vector<int>& nums) {
        int lastpos = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (i + nums[i] >= lastpos) {
                lastpos = i;
            }
        }
        return lastpos == 0;
    }
};
