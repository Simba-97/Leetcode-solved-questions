class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int, int> mp;
    RandomizedSet() {
        // set<int> st;
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return false;
        }
        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) {
            return false;
        }
        
        auto pos = mp.find(val);
        v[pos->second] = v.back();
        v.pop_back();
        mp[v[pos->second]] = pos->second;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */