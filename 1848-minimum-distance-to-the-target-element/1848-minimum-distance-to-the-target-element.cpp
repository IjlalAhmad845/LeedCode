class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min=INT_MAX;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                int result=abs(i-start);
                if(result<min)
                    min=result;
            }
        }
        
        return min;
    }
    
    int abs(int x)
    {
        if (x<0)
            return -x;
        return x;
    }
};