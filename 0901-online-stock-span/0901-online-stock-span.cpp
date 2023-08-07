class StockSpanner {
public:
    stack<int> st;
    int i=0;
    vector<int> v;
    StockSpanner() {
        i++;
        st.push(0);
        v.push_back(INT_MAX);
    }
    
    int next(int price) {
        int result;
        if(st.empty() || price>=v[st.top()])
        {
            while(!st.empty() && price>=v[st.top()])
            {
                st.pop();
            }
            
            if(st.empty())
                result = 1;
            else 
                result = i-st.top();
        }
        else result = 1;
        
        st.push(i);
        v.push_back(price);
        
        i++;
        
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */