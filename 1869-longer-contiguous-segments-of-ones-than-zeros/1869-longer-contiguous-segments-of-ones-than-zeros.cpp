class Solution {
public:
    bool checkZeroOnes(string s) {
        if(s.size()==1 && s[0]=='1')
            return true;
        int count=0;
        int ones=0;
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1] && s[i]=='1')
                count++;
            else 
                count=0;
            
            if(count>ones)
                ones=count;
        }
        if(ones!=0)
        ones++;
        count=0;
        int zeroes=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1] && s[i]=='0')
                count++;
            else 
                count=0;
            
            if(count>zeroes)
                zeroes=count;
        }
        if(zeroes!=0)
        zeroes++;
        return ones>zeroes;
    }
};