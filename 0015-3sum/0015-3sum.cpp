class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int t=-a;
            int start = i+1,end=n-1;
            
            while(start<end)
            {
                int result = nums[start]+nums[end];
                if(result==t)
                {
                    v.push_back({nums[i],nums[start],nums[end]});
                    while(start+1<n && nums[start]==nums[start+1])start++;
                    while(end>0 && nums[end]==nums[end-1])end--;
                    start++;
                    end--;
                }
                
                else if(result>t)
                    end--;
                else start++;
            }
            
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        
        return v;
    }
    
};