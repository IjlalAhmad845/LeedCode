class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(26,0);
        int count=0;
        
        fillFreqArr(v,"balloon");
        
        for(int i=0;i<text.size();i++)
        {
            if(v[text[i]-97]>0)
            {
                v[text[i]-97]--;
                text.erase(i,1);
                i--;
            }
            
            if(check(v))
            {
                count++;
                fillFreqArr(v,"balloon");
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