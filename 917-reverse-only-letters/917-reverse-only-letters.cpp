class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str="";
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                str+=s[i];
        }
        
        string str2="";
        
        int itr=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                str2+=str[itr++];
            else str2+=s[i];
        }
        
        return str2;
    }
};