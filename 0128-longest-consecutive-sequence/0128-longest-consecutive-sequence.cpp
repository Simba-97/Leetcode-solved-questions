class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int max_len = 0;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }

        for(auto &a: nums){
            int curr_len = 1;
            int left = a;
            int right = a;
            while(st.find(left-1) != st.end()){
                curr_len++;
                st.erase(left-1);
                left--;
            }

            while(st.find(right+1) != st.end()){
                curr_len++;
                st.erase(right+1);
                right++;
            }

            max_len = max(curr_len, max_len);
        }
        return max_len;
    }
};