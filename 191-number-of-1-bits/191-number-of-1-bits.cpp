class Solution {
public:
    int hammingWeight(uint32_t n) {
        // string s = to_string(n);
        // cout << s << endl;
        bitset<64> b1(n);
        return b1.count();
    }
};