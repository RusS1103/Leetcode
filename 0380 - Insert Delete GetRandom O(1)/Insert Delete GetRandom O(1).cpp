// const int ZERO = []() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     return 0;
// }();

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {}
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (ans.count(val) != 0) {
            ans[val] = val;
            return false;
        }
        ans[val] = val;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto it = ans.find(val);
        if (it != ans.end()) {
            ans.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int randomNum = rand() % ans.size();
        auto it = next(ans.begin(), randomNum);
        return (*it).second;
    }
private:
    unordered_map<int, int> ans;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
