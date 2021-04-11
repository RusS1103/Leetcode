class Solution {
public:
    bool isLongPressedName(const string& name, const string& typed) {
        int np = 0, tp = 0;
        while (np < name.size() && tp < typed.size()) {
            if (name[np] == typed[tp]) {
                ++np;
                ++tp;
            } else if (tp >= 1 && typed[tp] == typed[tp - 1]) {
                ++tp;
            } else {
                return false;
            }
        }
        if (np != name.size()) {
            return false;
        } else {
            while (tp < typed.size()) {
                if (typed[tp] != typed[tp - 1]) {
                    return false;
                }
                tp += 1;
            }
        }
        return true;
    }
};
