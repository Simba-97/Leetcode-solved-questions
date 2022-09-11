class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> trustby;
        unordered_map<int, int> trustto;
		for(vector<int> item: trust){
             trustby[item[1]]++;
             trustto[item[0]]++;
        }
        for(int i=1; i<=n; i++) {
            if(trustto[i]==0 && trustby[i]==n-1) return i;
        }
        return -1;
    }
};