class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        unordered_map<int, int> mp;
        for(auto a : nums1) {
            mp[a]++;
        }
        for(auto b : nums2) {
            if(mp[b] > 0) {
                ans.push_back(b);
                mp[b]--;
            }
        }
        return ans;
    }
};