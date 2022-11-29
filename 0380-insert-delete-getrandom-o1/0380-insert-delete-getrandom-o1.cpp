class RandomizedSet {
    unordered_set<int> ust;
public:
    RandomizedSet() {
        srand(time(0));
    }
    
    bool insert(int val) {
        if(ust.find(val)!=ust.end())
            return false;
        
        ust.insert(val);
        
        return true;
    }
    
    bool remove(int val) {
        if(ust.find(val)!=ust.end())
        {
            ust.erase(val);
            return true;
        }
        
        return false;
    }
    
    int getRandom() {
        int random=rand()%ust.size();
        auto itr=ust.begin();
        while(random-- && itr!=ust.end())
        {
            itr++;
        }
        
        return *itr;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */