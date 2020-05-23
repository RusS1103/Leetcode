const int ZERO = [](){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return 0;
}();

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum ^= num;
        }
        return sum;
    }
};
