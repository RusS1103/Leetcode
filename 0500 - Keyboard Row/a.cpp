class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> key;
        key['q']=1, key['w']=1, key['e']=1, key['r']=1, key['t']=1,
        key['y']=1, key['u']=1, key['i']=1, key['o']=1, key['p']=1;
        key['a']=2, key['s']=2, key['d']=2, key['f']=2,
        key['g']=2, key['h']=2, key['j']=2, key['k']=2, key['l']=2;
        key['z']=3, key['x']=3, key['c']=3, key['v']=3, key['b']=3,
        key['n']=3, key['m']=3; 
        vector<string> result;
        for (auto word : words) {
            bool isOne = true;
            for (int i = 0; i < word.size() - 1; ++i) {
                if (key[imp(word[i])] != key[imp(word[i + 1])]) {
                    isOne = false;
                }
            }
            if (isOne) {
                result.push_back(move(word));
            }
        }
        return result;
    }
    char imp(char c) {
        return 'A' <= c && c <= 'Z' ? c - 'A' + 'a' : c;
    }
};
