const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

struct Pair {
    int a, b;
};

bool operator<(const Pair& first, const Pair& second) {
    return first.b > second.b;
}

class Solution {
public:
    vector<int> topKFrequent(const vector<int>& nums, int k) {
        vector<Pair> ans;   
        unordered_map<int, int> hash;
        for (auto now : nums) {
            ++hash[now];
        }
        for (auto now : hash) {
            ans.push_back({now.first, now.second});
        }
        sort(ans.begin(), ans.end());
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(ans[i].a);
        }
        return result;
    }
};
