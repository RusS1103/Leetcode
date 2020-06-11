const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        slow = nums[slow];
        fast = nums[nums[fast]];
        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        
        
        int a_point = nums[0];
        int b_point = slow;
        
        while (a_point != b_point) {
            a_point = nums[a_point];
            b_point = nums[b_point];
        }
        
        return a_point;
    }
};
