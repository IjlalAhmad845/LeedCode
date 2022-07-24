class Solution {
public:
    bool isPalindrome(string s) {
        
        string result="";
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i]=s[i]+32;
                result+=s[i];
            }
        }
        
        cout<<result;
        
        for(int i=0;i<result.size()/2;i++)
        {
            if(result[i]!=result[result.size()-i-1])
                return false;
        }
        return true;
    }
};