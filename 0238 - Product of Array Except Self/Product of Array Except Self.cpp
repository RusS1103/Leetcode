// const int ZERO = []() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     return 0;
// }();

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        answer[0] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            answer[i] = nums[i - 1] * answer[i - 1];
        }
    
        int r = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            answer[i] = answer[i] * r;
            r *= nums[i];
        }
        return answer;
    }
};
