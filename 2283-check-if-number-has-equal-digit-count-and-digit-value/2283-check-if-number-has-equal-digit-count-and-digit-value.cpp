class Solution {
public:
    bool digitCount(string num) {
        for(int i=0;i<num.size();i++)
        {
            if(num[i]-'0'!=count(num,i+'0'))
                return false;
        }
        
        return true;
    }
    
    int count(string num,char ch)
    {
        int c=0;
        for(int i=0;i<num.size();i++)
            if(num[i]==ch)
                c++;
        
        return c;
    }
};