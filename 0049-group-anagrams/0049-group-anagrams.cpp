class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map <string, vector<string>> mMap; 

        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];

            sort(s.begin(), s.end());
            mMap[s].push_back(strs[i]);
        }

        for(auto itr = mMap.begin(); itr != mMap.end(); itr++) {
            result.push_back(itr->second);
        }

        
        return result;
    }
};