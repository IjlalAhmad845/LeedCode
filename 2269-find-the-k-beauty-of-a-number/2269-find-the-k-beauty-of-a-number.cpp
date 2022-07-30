class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        
        string str=to_string(num);

        for(int i=0;i<str.size()-k+1;i++)
        {
            string str1="";
            for(int j=0;j<k;j++)
                str1+=str[i+j];
            
            if(divisor(str,str1))
                count++;
        }
        
        return count;
    }
    
    int divisor(string s,string num)
    {
        int s1=0;
        for(int i=0;i<s.size();i++)
            s1=s1*10+(s[i]-'0');
        
        int num1=0;
        for(int i=0;i<num.size();i++)
            num1=num1*10+(num[i]-'0');
        
        if(num1==0)
            return false;
        return s1%num1==0;
    }
};