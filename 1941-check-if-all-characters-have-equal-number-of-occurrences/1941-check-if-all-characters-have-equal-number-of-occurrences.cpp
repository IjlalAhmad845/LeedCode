class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++)
            v[s[i]-97]++;
        
        int temp=0,prev=0;
        for(int i=0;i<26;i++)
        {
            if(v[i]!=0)
            {
                temp=v[i];
                if(temp!=prev && prev!=0)
                    return false;
            }
            prev=temp;
        
        }
        
        return true;
    }
};