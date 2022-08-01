class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        
        int even=0,odd=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v[even]=nums[i];
                even+=2;
            }
            else 
            {
                v[odd]=nums[i];
                odd+=2;
            }
        }
        
        return v;
    }
};