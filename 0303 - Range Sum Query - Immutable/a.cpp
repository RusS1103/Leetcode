const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class NumArray {
public:
    NumArray(vector<int>& nums) {
        result.resize(nums.size() + 1);
        for (int i = 0; i < nums.size(); ++i) {
            result[i + 1] = nums[i] + result[i];
        }
    }
    
    int sumRange(int i, int j) {
        return result[j + 1] - result[i];
    }
    
    vector<int> result;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
