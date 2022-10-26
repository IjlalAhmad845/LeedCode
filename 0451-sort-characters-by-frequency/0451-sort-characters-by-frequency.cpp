class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]]=1;
            else 
                m[s[i]]++;
            
        }
        
        vector<pair<int,char>> v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end());
        
        string result="";
        
        for(int i=v.size()-1;i>=0;i--)
        {
            result+=v[i].second;
            if(v[i].first>1)
            {
                v[i].first--;
                i++;
            }
        }
        
        return result;
    }
};