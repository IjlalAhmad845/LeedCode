class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        
        for(auto i:nums)
        {
            if(i%2==0)
                sum+=i;
        }
        
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            int val=queries[i][0];
            int index=queries[i][1];
            
            int init=nums[index];
            
            if(init%2==0)
                sum-=init;
            
            nums[index]=nums[index]+val;
          
            if(nums[index]%2==0)
                sum+=nums[index];
            
            v.push_back(sum);
        }
        
        return v;
    }
};