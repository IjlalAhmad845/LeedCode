class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        if(n==0)
            return {-1,-1};
        
        int s=0,e=n-1;
        
        int a=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                a=mid;
                e=mid-1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else 
            {
                s=mid+1;
            }
        }
        
        s=0,e=n-1;
        int b=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                b=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else 
            {
                s=mid+1;
            }
        }
        
        return {a,b};
    }
};