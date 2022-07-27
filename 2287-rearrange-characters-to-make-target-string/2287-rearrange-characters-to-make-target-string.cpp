class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> v(26,0);
        int count=0;
        
        fillFreqArr(v,target);
        
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-97]>0)
            {
                v[s[i]-97]--;
                s.erase(i,1);
                i--;
            }
            
            if(check(v))
            {
                count++;
                fillFreqArr(v,target);
                i=-1;
            }
        }
        
        return count;
    }
    
    void fillFreqArr(vector<int> &v,string target)
    {
        for(int i=0;i<target.size();i++)
                v[target[i]-97]++; 
    }
    
    bool check(vector<int>&v)
    {
        for(int i=0;i<v.size();i++)
            if(v[i]!=0)
                return false;
        
        return true;
    }
};