class Solution {
    vector<vector<int>> v;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return v;
    }
    
    void helper(vector<int> &nums,int itr)
    {
        if(itr==nums.size()-1)
        {
            v.push_back(nums);
            return;
        }
        
        for(int i=itr;i<nums.size();i++)
        {
            // helper(nums,itr+1);
            swap(nums[itr],nums[i]);
            helper(nums,itr+1);
            swap(nums[itr],nums[i]);
        }
        
        return;
    }
};