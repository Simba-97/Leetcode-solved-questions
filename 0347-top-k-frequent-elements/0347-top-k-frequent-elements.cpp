class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        /**
            1 -> 3
            2 -> 2
            3 -> 1
        */
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto &a: mp){
            pq.push({a.second, a.first});
            while(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};