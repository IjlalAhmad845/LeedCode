class Solution {
public:
    bool checkString(string s) {
        int temp1=0,temp2=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
                temp1=0;
            if(s[i]=='b')
                temp1=temp2=1;
            
            if(temp1!=temp2)
                return false;
        }
        
        return true;
    }
};