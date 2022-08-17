class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
                if(m.find(nums[i])!=m.end())
                {
                    m.find(nums[i])->second++;
                }
                else 
                {
                    m.insert({nums[i],1});
                }
        }
        
        vector<pair<int,int>> v;
        for(auto &i:m)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end(),comp);
        
        vector<int> result;
        
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].second;j++)
                result.push_back(v[i].first);
        }
        
        return result;
        
    }
    
    static bool comp(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.second==b.second)
            return b.first<a.first;
        return a.second<b.second;
    }
};