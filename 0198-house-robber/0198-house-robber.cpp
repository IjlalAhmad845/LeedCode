class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> v(nums.size()+1,-1);
        return max(helper(nums,0,v),helper(nums,1,v));
    }
    
    int helper(vector<int>& nums,int i,vector<int>&v)
    {
        if(i>=nums.size())
            return 0;
        
        if(v[i]!=-1)
            return v[i];
        
        v[i] = nums[i] + max(helper(nums,i+2,v),helper(nums,i+3,v));
        
        return v[i];
    }
};