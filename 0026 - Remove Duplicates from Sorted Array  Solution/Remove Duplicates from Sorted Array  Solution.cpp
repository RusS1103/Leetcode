class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = -1;
        for (auto num : nums) {
            if (last == -1 || nums[last] != num) {
                nums[++last] = num;
            }
        }
        return last + 1;
    }
};
