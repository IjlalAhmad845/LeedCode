class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        
        vector<int> v;
        int n = temperatures.size();
        
        //traverse from right to left
        for(int i=n-1;i>=0;i--)
        {            
            if(st.empty() || temperatures[i]>=temperatures[st.top()])
            {
                while(!st.empty() && temperatures[i]>=temperatures[st.top()])
                {
                    st.pop();
                }
                
                //when stack is empty simply push index and 0
                if(st.empty())
                {
                    st.push(i);
                    v.push_back(0); 
                }
                //push difference and index
                else 
                {
                    v.push_back(st.top()-i);
                    st.push(i);
                }
            }
            //when element is smaller simply push 1 and index
            else 
            {
                st.push(i);
                v.push_back(1);
            }
        }
        
        //result is reverse
        reverse(v.begin(),v.end());
        return v;
    }
};