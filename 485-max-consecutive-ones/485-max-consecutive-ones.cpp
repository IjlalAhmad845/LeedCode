class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max=0;
        int currentMax=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                currentMax++;
            else currentMax=0;
            
            if(currentMax>max)
                max=currentMax;
        }
        
        return max;
    }
};