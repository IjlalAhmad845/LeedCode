class Solution {
public:
    string makeFancyString(string s) {
        stack<char> st;
        
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && st.top()==s[i])
            { 
                count++;
            }
            else count=0;
            
            if(count<2)
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
            result[i]=result[result.size()-i-1];
            result[result.size()-i-1]=temp;
        }
        
        return result;
    }
};