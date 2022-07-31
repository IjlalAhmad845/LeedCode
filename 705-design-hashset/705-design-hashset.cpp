class MyHashSet {
public:
    vector<int> v;
    
    MyHashSet() {
    }
    
    void add(int key) {
        if(!contains(key))
            v.push_back(key);
    }
    
    void remove(int key) {
        vector<int> v1;
        for(int i=0;i<v.size();i++)
            if(v[i]!=key)
                v1.push_back(v[i]);
        
        v=v1;
    }
    
    bool contains(int key) {
        for(int i=0;i<v.size();i++)
            if(v[i]==key)
                return true;
        
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */