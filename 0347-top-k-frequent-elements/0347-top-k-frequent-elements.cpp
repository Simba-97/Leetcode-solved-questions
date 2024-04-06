class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto a : mp){
            minHeap.push({a.second, a.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        while(minHeap.size() > 0) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};