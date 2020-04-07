const int ZERO = [](){
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        return 0;
}();

class Solution {
    
public:
    void rotate(vector<int>& nums, int k) {
        if (k >= nums.size()) {
            k %= nums.size();
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
