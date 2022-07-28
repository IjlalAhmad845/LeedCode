class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && (st.top()==s[i]-32 || st.top()==s[i]+32))
                st.pop();
            else 
                st.push(s[i]);
        }
        
        string result="";
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        
        char temp;
        for(int i=0;i<result.size()/2;i++)
        {
            temp=result[i];
            result[i]=result[result.size()-1-i];
            result[result.size()-1-i]=temp;
        }
        
        return result;
    }
};