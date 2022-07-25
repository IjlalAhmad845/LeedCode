class Solution {
public:
    int firstUniqChar(string s) {
        set<char> st,st2;
        
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                st.erase(s[i]);
                st2.insert(s[i]);
            }
            else 
            {
                if(st2.find(s[i])==st2.end())
                    st.insert(s[i]);
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
                return i;
        }
        
        return -1;
    }
};