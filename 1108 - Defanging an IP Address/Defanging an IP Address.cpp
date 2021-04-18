class Solution {
public:
    string defangIPaddr(string address) {
        int count = 0;
        for (int i = 0; i < address.size(); ++i) {
            if (address[i] == '.') {
                ++count;
            }
        }
        int len = address.size();
        address.resize(address.size() + 2 * count);
        for (int i = len - 1; i >= 0; --i) {
            if (address[i] != '.') {
                address[i + 2 * count] = address[i];
            } else {
                --count;
                address[i + 2 * count] = '[';
                address[i + 2 * count + 1] = '.';
                address[i + 2 * count + 2] = ']';
            }
        }
        return address;
    }
};
