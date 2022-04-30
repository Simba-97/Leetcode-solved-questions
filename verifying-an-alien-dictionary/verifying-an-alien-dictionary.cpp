class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
//         for(int i = 0; i < words.size() - 1; i++) {
//             string word1 = words[i];
//             string word2 = words[i + 1];
            
//             int i1 = 0, i2 = 0;
            
//             while(word1[i1] == word2[i2]) {
//                 i1++;
//                 i2++;
//             }
            
//             int r = order.find(word1[i1]);
//             int l = order.find(word2[i2]);
            
//             if(r > l) {
//                 return false;
//             }
//         }
//         return true;
        //better approach
        unordered_map<char, int> map;
        
        for(int i = 0; i < order.size(); i++)
            map[order[i]] = i;
        
        int len;
        string currentWord, nextWord;
        for(int i = 0; i < words.size() - 1; i++)
        {
            currentWord = words[i];
            nextWord = words[i + 1];
            
            if(currentWord.size() > nextWord.size())
                len = nextWord.size();
            else
                len = currentWord.size();
            
            if(currentWord.size() != len)
            {
                if(currentWord.substr(0, len) == nextWord) 
                    return false;
            }
        
            for(int j = 0; j < len; j++)
            {
                if(map[currentWord[j]] > map[nextWord[j]])
                    return false;
                if(map[currentWord[j]] < map[nextWord[j]])
                    break;
            }
        }
        return true;
    }
};