class Solution {
public:
    int countGoodSubstrings(string se) {
        // if(s.size() <= 1) return 0;
        // int count = 0;
        // for(int i = 0; i < s.size()-2; i++) {
        //     if((s[i] != s[i+1]) and (s[i] != s[i+2]) && (s[i+1] != s[i+2])) {
        //         count++;
        //     }
        // }
        // return count;
        set<int>s;
        if(se.length()<3)return 0;
        int maxi = 0;
        int i;
        for(i=0;i<se.length()-2;i++){
            for(int j=i;j<(i+3);j++){
                s.insert(se[j]);
            }
            if(s.size()==3)maxi++;
            s.clear();
        }
            // for(int j=i;j<(i+3);j++){
            //     s.insert(se[j]);
            // }
            // if(s.size()==3)maxi++;
        return maxi;
    }
};