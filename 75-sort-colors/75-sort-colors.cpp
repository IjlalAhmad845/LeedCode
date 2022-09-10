class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for(int j=2;j>=0;j--)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==j)
                {
                    nums.erase(nums.begin()+i);
                    nums.insert(nums.begin(),j);
                }
            }
           
        }
        
    }
};