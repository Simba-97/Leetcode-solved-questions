class Solution {
public:
    string generateNewWord(string& word){
        vector<int> v(26, 0);

        for(int i = 0; i < word.size(); i++){
            v[word[i] - 'a']++;
        }

        string newWord = "";
        for(int i = 0; i < 26; i++){
            if(v[i] > 0) {
                newWord += string(v[i], i + 'a');
            }
        }

        return newWord;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> ans;
        // map<string, vector<string>> mp;

        // for(int i = 0; i < strs.size(); i++){
        //     string temp = strs[i];
        //     sort(temp.begin(), temp.end());

        //     mp[temp].push_back(strs[i]);
        // }
        
        // for(auto a: mp){
        //     ans.push_back(a.second);
        // }
        // return ans;

        vector<vector<string>> ans;
        map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            string new_word = generateNewWord(temp);

            mp[new_word].push_back(strs[i]);
        }
        
        for(auto &a: mp){
            ans.push_back(a.second);
        }
        return ans;
    }
};