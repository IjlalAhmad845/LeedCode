class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string result="";
        string current="";
        
        set<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])==st.end())
            {
                current+=s[i];
                st.insert(s[i]);
            }
            else 
            {
                int index = current.find(s[i],0);
                for(int j=0;j<=index;j++)
                {
                    st.erase(s[i]);
                }
                current = current.substr(index+1);
                st.insert(s[i]);
                current+=s[i];
            }
            
            if(current.size()>=result.size())
                result = current;
        }
        
        return result.size();
    }
};