class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            vector<int> temp=nums;
            temp.erase(temp.begin()+i);
            
            if(inc(temp))
                return true;
        }
        
        return false;
    }
    
    bool inc(vector<int> nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
                return false;
        }
        
        return true;
    }
};