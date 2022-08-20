class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        nums.push_back(INT_MAX);
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                count+=nums[i]-nums[i+1]+1;
                nums[i+1]+=nums[i]-nums[i+1]+1;
            }
        }
        
        return count;
    }
};