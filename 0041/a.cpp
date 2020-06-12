class Solution {
public:
    int firstMissingPositive(const vector<int>& nums) {
        unordered_map<int, int> numbers;
        for (auto number : nums) {
            ++numbers[number];
        }
        int x = 1;
        while (true) {
            if (!numbers.count(x)) {
                return x;
            }
            ++x;
        }
    }
};
