class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        for(auto email: emails) {
            int i = 0;
            int n = email.size();
            while(true) {
                if(email[i] == '@') {
                    break;
                }
                if(email[i] == '.') {
                    email.erase(i, 1);
                } else {
                    i++;
                }
                if(email[i] == '+') {
                    email.erase(i, email.find('@')-i);
                    break;
                }
            }
            s.insert(email);
        }
        return s.size();
    }
};