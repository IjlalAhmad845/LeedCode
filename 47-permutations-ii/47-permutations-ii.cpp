class Solution {
    vector<vector<int>> v;
    set<vector<int>> st;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0);
        for(auto s:st)
        {
            v.push_back(s);
        }
        
        return v;
    }
      void helper(vector<int> &nums,int itr)
    {
        if(itr==nums.size()-1)
        {
            st.insert(nums);
            return;
        }
        
        for(int i=itr;i<nums.size();i++)
        {
            swap(nums[itr],nums[i]);
            helper(nums,itr+1);
            swap(nums[itr],nums[i]);
        }
        
        return;
    }
};