class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
  
        unordered_map<int,int> map;
        
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(nums[i])!=map.end())
                map[nums[i]]++;
            else map[nums[i]]=1;
        }
        
        vector<pair<int,int>> v;
        
        for(auto m:map)
            v.push_back({m.first,m.second});
         
        
        
        sort(v.begin(),v.end(),comparator);
        
         for(auto m:map)
        { 
            cout<<m.first<<","<<m.second<<"|";
        }
        
        vector<int> result;
        for(int i=0;i<k;i++)
            result.push_back(v[i].first);
        
        return result;
    
    }
    
    static bool comparator(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
};