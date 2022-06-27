class Solution {
public:
    int minPartitions(string n) {
        // char best = '0';
        // for (auto& c : n)
        //     if (c > best) best = c;
        // return best - '0';
        return *max_element(n.begin(), n.end()) - '0';
    }
};