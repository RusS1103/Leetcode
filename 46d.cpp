template <typename T>
bool next_permutaton(T begin, T end) {
    T cur = end;
    while (true) {
        --cur;
        if (cur == begin) {
            reverse(begin, end);
            return false;
        }
        T prev = cur;
        --prev;
        if (*prev < *cur) {
            T i = end;
            while (true) {
                --i;
                if (*i > *prev) {
                    swap(*i, *prev);
                    reverse(cur, end);
                    return true;;
                }
            }
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(result.begin(), result.end());
    result.push_back(nums);
    while (next_permutaton(nums.begin(), nums.end())) {
        result.push_back(nums);
    }
    return result;
}
