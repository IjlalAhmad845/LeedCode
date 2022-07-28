class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]-32;
            
            if(s[i]!='-')
                str+=s[i];
        }
        
        string result="";
        int grps=str.size()/k;
        int rem=str.size()%k;
        
        int itr=str.size()-1;
        for(int i=0;i<grps;i++)
        {
            for(int j=0;j<k;j++)
                result+=str[itr--];
            result+="-";
        }
        
        
        
        if(rem==0)
        {
            result=reverse(result);
            result.erase(0,1);
        }
        else 
        {
            for(int i=0;i<rem;i++)
                result+=str[itr--];
            
            result=reverse(result);
        }
        
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