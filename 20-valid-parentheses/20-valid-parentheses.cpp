class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        char ch;
        for(int i=0;i<s.size();i++)
        {
            ch=s[i];
            
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            
            else if(ch==')')
            {
                if(!st.empty() && st.top()=='(')
                    st.pop();
                else return false;
            }
            else if(ch=='}')
            {
                if(!st.empty() && st.top()=='{')
                    st.pop();
                else return false;
            }
            else if(ch==']')
            {
                if(!st.empty() && st.top()=='[')
                    st.pop();
                else return false;
            }
        }
        
        if(!st.empty())
            return false;
        return true;
    }
};