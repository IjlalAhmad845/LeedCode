class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        for(int i=0;i<s1.size();i++)
        {
            for(int j=i;j<s2.size();j++)
            {
                if(swap(s1,i,j)==s2)
                    return true;
            }
        }
        
        return false;
            
    }
    
    string swap(string s,int i,int j)
    {
        char ch=s[i];
        s[i]=s[j];
        s[j]=ch;
        
        return s;
    }
};