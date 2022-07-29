class Solution {
public:
    bool checkOnesSegment(string s) {
        int temp1=0,temp2=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                temp2=temp1=1;
            else temp1=0;
            
            if(temp1!=temp2)
                return false;
        }
        
        return true;
    }
};