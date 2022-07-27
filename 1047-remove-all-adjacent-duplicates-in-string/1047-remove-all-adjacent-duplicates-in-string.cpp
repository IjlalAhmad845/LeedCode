class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() ||st.top()!=s[i])
                st.push(s[i]);
            else
                st.pop();
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
            result[i]=result[result.size()-i-1];
            result[result.size()-i-1]=temp;
        }
        
        return result;
    }
};