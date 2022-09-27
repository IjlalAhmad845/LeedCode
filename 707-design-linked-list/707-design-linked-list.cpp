class MyLinkedList {

    vector<int> v;
public:
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>=v.size())
            return -1;
        
        return v[index];
    }
    
    void addAtHead(int val) {
        reverse(v.begin(),v.end());
        
        v.push_back(val);
        
        reverse(v.begin(),v.end());
    }
    
    void addAtTail(int val) {
        v.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>v.size())
            return;
        
        v.insert(v.begin()+index,val);
    }
    
    void deleteAtIndex(int index) {
        if(index>=v.size())
            return;
        
        v.erase(v.begin()+index);
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */