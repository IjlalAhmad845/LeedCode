class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<string> v;
        
        string temp="";
        temp+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
                temp+=s[i];
            else 
            {
                v.push_back(temp);
                temp="";
                temp+=s[i];
            }
        }
        
        v.push_back(temp);
        
        vector<vector<int>> result;
        
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i].size();
            vector<int> p;
            if(v[i].size()>=3)
            {
                p.push_back(sum-v[i].size());
                p.push_back(sum-1);
                result.push_back(p);
            }
        }
        
        return result;
    }
};