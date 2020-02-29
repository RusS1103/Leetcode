class Solution {
    const int ZERO = [](){
        ios_base::sync_with_stdio;
        cin.tie(nullptr);
        return 0;
    }();
    
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
