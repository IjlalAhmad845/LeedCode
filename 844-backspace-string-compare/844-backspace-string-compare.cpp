class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p=0;
        
        while(p<s.size())
        {
            if(s[p]=='#')
            {
                if(p>0)
                {    
                    s.erase(p-1,2);
                    p-=2;
                }
                else
                {   
                    s.erase(p,1);
                    p--;
                }
            }
            p++;
        }
        p=0;
        while(p<t.size())
        {
            if(t[p]=='#')
            {
                if(p>0)
                {
                    t.erase(p-1,2);
                    p-=2;
                }
                else
                {
                    t.erase(p,1);
                    p--;
                }
            }
            p++;
        }
        
        cout<<s<<" "<<t;
        
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++)
            if(s[i]!=t[i])
                return false;
        
        return true;
    }
};