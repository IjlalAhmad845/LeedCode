class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        //expected sum
        int sum=n*(n+1)/2;
        
        //finding dumplicate value
        int dup;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                dup=nums[i];
                break;
            }
        }
        
        //actual sum
        int sum2=accumulate(nums.begin(),nums.end(),0);
        
        //expected sum > actual then deleted number dup+(sum-sum2)
        if(sum>sum2)
            return {dup,dup+(sum-sum2)};
        
        //expected sum < actual then deleted number dup-(sum2-sum)
        else 
            return {dup,dup-(sum2-sum)};
    }

};