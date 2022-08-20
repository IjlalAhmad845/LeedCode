class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int start=nums[0];
        int end=nums[nums.size()-1];
        
        int index;
        for(int i=1;i<=start;i++)
        {
            if(start%i==0 && end%i==0)
                index=i;
        }
        
        return index;
    }
};