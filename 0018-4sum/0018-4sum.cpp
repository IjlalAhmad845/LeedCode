class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int j=0;j<n;j++)
        {
            for(int i=j+1;i<n;i++)
            {
                long a=nums[i]+nums[j];
                long t=-a+target;
                int start = i+1,end=n-1;

                while(start<end)
                {
                    long result = nums[start]+nums[end];
                    if(result==t)
                    {
                        v.push_back({nums[j],nums[i],nums[start],nums[end]});
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
            
            while(j+1<n && nums[j]==nums[j+1])j++;
        }
        
        return v;
    }
};