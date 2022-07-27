class Solution {
public:
    string freqAlphabets(string s) {
        string result="";
        
        string temp;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='1' && s[i]<='9')
                result+=(s[i]-'0')+96;
            if(s[i]=='#')
            {
                temp="";
                temp+=s[i-2];
                temp+=s[i-1];
                result+=stoi(temp)+96;
                i-=2;
            }
        }
        
        char ch;
        for(int i=0;i<result.size()/2;i++)
        {
            ch=result[i];
            result[i]=result[result.size()-1-i];
            result[result.size()-1-i]=ch;
        }
        
        return result;
    }
};