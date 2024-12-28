class RandomizedSet {
public:
    unordered_map<long long, long long > mp; 
    vector<long long>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto it=mp.find(val);
        if(it==mp.end()){
        v.push_back(val);
        mp[val]=v.size()-1;
        return true;
        }else
        return false;
    }
    
    bool remove(int val) {
        auto it=mp.find(val);
        if(it==mp.end()){
          return false;
        }else

       { int id=mp[val];
        int temp=v.back();
        swap(v[id],v.back());
        v.pop_back();
        mp[temp]=id;
        mp.erase(val);
        return true;
       }
       
       
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
