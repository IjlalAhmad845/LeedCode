class MyStack {
    vector<int> v;
    int itr=-1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
        itr++;
    }
    
    int pop() {
        int result=v[itr];
        v.erase(v.begin()+itr);
        itr--;
        return result;
    }
    
    int top() {
        return v[itr];
    }
    
    bool empty() {
        return itr==-1;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */