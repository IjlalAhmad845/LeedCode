class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        
        int count=0;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                count++;
                if(max<count)
                    max=count;
            }
            
            if(s[i]==')')
            {
                count--;
                st.pop();
            }
        }
        
        return max;
    }
};