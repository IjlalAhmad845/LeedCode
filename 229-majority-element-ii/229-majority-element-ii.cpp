class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
                m[nums[i]]=1;
            else 
                m[nums[i]]++;
        }
        
        vector<int> v;
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second>n/3)
                v.push_back(i->first);
        }
        
        return v;
    }
};