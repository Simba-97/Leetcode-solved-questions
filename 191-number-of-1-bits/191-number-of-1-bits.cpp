class Solution {
public:
    int hammingWeight(uint32_t n) {
        // string s = to_string(n);
        // cout << s << endl;
        // bitset<64> b1(n);
        // return b1.count();
        int count = 0;
        while(n > 0) {
            count += (n & 1);
            n=n>>1;
        }
        return count;
    }
};