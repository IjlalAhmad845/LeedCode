class Solution {
public:
    string replaceDigits(string s) {
        
        string result="";
        
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
                result+=s[i];
            else 
                result+=shift(s[i-1],s[i]-'0'); 
        }
        
        return result;
    }
    
    char shift(char ch,int index)
    {
        return ch+index;
    }
    
};