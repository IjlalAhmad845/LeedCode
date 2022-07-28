class Solution {
public:
    string thousandSeparator(int n) {
        
        if(n==0)
            return "0";
        
        string str="";
        
        while(n!=0)
        {
            str+=n%10+'0';
            n/=10;
        }
        
        
        string result="";
        
        for(int i=0;i<str.size();i++)
        {
            if(i%3==0 && i!=0)
                result+=".";
            result+=str[i];
            
        }
        
        result=reverse(result);

        if(str[0]=='.')
            str.erase(0,1);
        return result;
    }
    
    string reverse(string s)
    {
        char temp;
        for(int i=0;i<s.size()/2;i++)
        {
            temp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=temp;
        }
        
        return s;
    }
};