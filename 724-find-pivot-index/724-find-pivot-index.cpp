class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=accumulate(nums.begin()+1,nums.end(),0);
        
        for(int i=0;i<nums.size();i++)
        {
            if(left==right)
                return i;
            
            cout<<left<<","<<right<<" ";
            
            left+=nums[i];
            if(i!=nums.size()-1)
                right-=nums[i+1];
        }
        
        return -1;
    }
};