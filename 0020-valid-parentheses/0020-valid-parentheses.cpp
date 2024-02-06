class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() % 2 != 0) return false;
        
        for(auto it: s){
            if(it == '(' || it == '{' || it == '['){
                st.push(it);
            } else if(it == ')' && !st.empty() && st.top() == '('){
                st.pop();
            } else if(it == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            } else if(it == ']' && !st.empty() && st.top() == '['){
                st.pop();
            } else {
                return false;
            }
        }
        
        return st.empty();
    }
};