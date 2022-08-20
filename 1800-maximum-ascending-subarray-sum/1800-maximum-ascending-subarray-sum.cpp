class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int current=0;
        int max=INT_MIN;
        nums.insert(nums.begin(),0);
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
                current=0;
            
            current+=nums[i];
            cout<<current<<" ";
            
            if(current>max)
                max=current;
        }
        
        return max;
    }
};