class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sStack;
        stack<char> tStack;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#' && sStack.empty()){
                continue;
            } else if(s[i] == '#'){
                sStack.pop();
            } else {
                sStack.push(s[i]);
            }
        }
        
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#' && tStack.empty()){
                continue;
            } else if(t[i] == '#'){
                tStack.pop();
            } else {
                tStack.push(t[i]);
            }
        }
        
        if(sStack.size() != tStack.size()) return false;
        
        string newS, newT;
        while(!sStack.empty()){
            newS.push_back(sStack.top());
            sStack.pop();
        }
        
        while(!tStack.empty()){
            newT.push_back(tStack.top());
            tStack.pop();
        }
        
        //cout << newS << " " << newT;
        if(newS != newT) return false;
        
        return true;
    }
};