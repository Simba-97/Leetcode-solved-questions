class Solution {
public:
    bool static mysort(string s1,string s2){
        return (s1+s2)>(s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),mysort);
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        if(ans[0]=='0') return "0";
        return ans;
    }
};