class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        
        string temp;
        for(int i=0;i<s.size();i++)
        {
            if(i%k==0)
            {
                if(i!=0)
                    v.push_back(temp);
                temp="";
                temp+=s[i];
            }
            else temp+=s[i];
        }
        
        v.push_back(temp);
        
        int rem=k-v[v.size()-1].size();
        
        for(int i=0;i<rem;i++)
            v[v.size()-1]+=fill;
        
        return v;
    }
};