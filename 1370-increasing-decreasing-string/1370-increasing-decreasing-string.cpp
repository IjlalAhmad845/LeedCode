class Solution {
public:
    string sortString(string s) {
        vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++)
            v[s[i]-97]++;
        
        string result="";
        
        int itr=0,i=1;
        
        while(!check(v))
        {
            
            if(itr==26)
            {
                itr--;
                continue;
            }
            if(itr==-1)
            {
                itr++;
                continue;
            }
            
            if(v[itr]>0)
            {                
                result+=itr+97;
                v[itr]--;
            }
            
            itr+=i;
            
            if(itr==26)
                i=-1;
            
            if(itr==-1)
                i=1;
                
           
        }
        
        return result;
    }
    
    bool check(vector<int>&v)
    {
        for(int i=0;i<26;i++)
            if(v[i]>0)
                return false;
        
        return true;
    }
};