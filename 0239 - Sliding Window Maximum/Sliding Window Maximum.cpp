class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> deq;
        for (int i = 0; i < nums.size(); ++i) {
            if (!deq.empty() && i - k >= deq.front()) {
                deq.pop_front();
            }
            while (!deq.empty() && nums[i] > nums[deq.back()]) {
                deq.pop_back();
            }
            deq.push_back(i);
            if (i - k + 1 >= 0) {
                result.push_back(nums[deq.front()]);
            }
        }
        return result;
    }
};
