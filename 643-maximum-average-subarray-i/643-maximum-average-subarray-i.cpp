class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max;
        double current=0;
        
        for(int i=0;i<k;i++)
        {
            current+=nums[i];
        }
        
        max=current;
     
        int itr=0;
        for(int i=k;i<nums.size();i++)
        {
            current=current-nums[itr++]+nums[i];
            
            if(current>max)
                max=current;
        }
        
        return max/k;
    }
};