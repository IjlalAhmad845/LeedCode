class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
      int n=nums.size();
        if(n==1)
            return 0;
        
        int k;
        int max=nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
                k=i;
            }
        }
        
        sort(nums.begin(),nums.end());
        
        
        
        if(nums[n-1]>=2*nums[n-2])
            return k;
        else return -1;
        
    }
};