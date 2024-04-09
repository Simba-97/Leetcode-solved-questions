class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        queue<char> q1, q2;
        for(int i = 0; i < s.size(); i++){
            q1.push(s[i]);
            q2.push(goal[i]);
        }
        
        int k = goal.size();
        while(k--){
            char ch = q2.front();
            q2.pop();
            q2.push(ch);
            
            if(q1 == q2){
                return true;
            }
        }
        return false;
    }
};