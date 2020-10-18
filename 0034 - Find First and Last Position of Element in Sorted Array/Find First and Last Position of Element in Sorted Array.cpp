const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2);
        result[0] = firstFunc(nums, target);
        result[1] = secondFunc(nums, target);
        return result;
    }
    
    int firstFunc(const vector<int>& nums, int target) {
        int index = -1;
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            
            if (nums[mid] == target) {
                index = mid;
            }
        }
        return index;
    }
    
    int secondFunc(const vector<int>& nums, int target) {
        int index = -1;
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            
            if (nums[mid] == target) {
                index = mid;
            }
        }
        
        return index;
    }
};
