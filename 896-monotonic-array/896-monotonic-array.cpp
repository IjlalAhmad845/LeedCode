class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag1=0,flag2=1;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                continue;
            
            if(nums[i]<nums[i+1])
                flag1=1;
            else 
                flag2=0;
            
            if(flag1!=flag2)
                return false;
        }
        
        return true;
    }
};