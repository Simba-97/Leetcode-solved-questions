class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        int maxFreq = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            maxFreq = max(maxFreq, mp[nums[i]]);
        }
        
        int count = 0;
        for(auto a: mp){
            if(a.second == maxFreq){
                count += a.second;
            }
        }
        return count;
    }
};