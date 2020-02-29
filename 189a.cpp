class Solution {
    
    const int ZERO = [](){
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        return 0;
    }();
public:
    void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums.size(), 0);
    for (size_t i = 0; i < nums.size(); ++i) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}
};
