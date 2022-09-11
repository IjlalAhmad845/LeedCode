class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
                m[nums[i]]++;
            else m[nums[i]]=1;
        }
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second==1)
                return i->first;
        }
        
        return 0;
    }
};