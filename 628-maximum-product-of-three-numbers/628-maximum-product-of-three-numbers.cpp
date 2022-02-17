class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int last=nums.size()-1;
        int result1=nums[last]*nums[last-1]*nums[last-2];
        int result2=nums[0]*nums[1]*nums[last];
        
        return max(result1,result2);
    }
};