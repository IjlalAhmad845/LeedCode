class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int,int>> v;
        
        for(int i=0;i<indices.size();i++)
        {
            v.push_back({indices[i],s[i]});
        }
        
        sort(v.begin(),v.end());
        
        string result="";
        
        for(int i=0;i<indices.size();i++)
        {
            result+=v[i].second;
        }
        
        return result;
    }
};