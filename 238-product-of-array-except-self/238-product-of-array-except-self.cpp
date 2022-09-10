class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left,right;
        
        left.push_back(1);
        for(int i=0;i<nums.size()-1;i++)
        {
            left.push_back(left[i]*nums[i]);
        }
        
        right.push_back(1);
        for(int i=nums.size()-1;i>0;i--)
        {
            right.push_back(right[nums.size()-1-i]*nums[i]);
        }
        
        reverse(right.begin(),right.end());
        
        for(int i=0;i<left.size();i++)
        {
            left[i]=left[i]*right[i];
        }
        
        return left;
    }
};