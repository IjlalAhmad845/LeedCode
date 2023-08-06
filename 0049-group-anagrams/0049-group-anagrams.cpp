class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> m;
        
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(i);
        }
        
        vector<vector<string>> v;
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            vector<string> v1;
            for(int j=0;j<i->second.size();j++)
            {
                v1.push_back(strs[i->second[j]]);
            }
            
            v.push_back(v1);
        }
        
        return v;
    }
};