class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max=0;
        int current=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                current++;
                cout<<current;
            }
            else 
            {
                if(current>max)
                    max=current;
                
                current=0;
            }
            
        }
        
        if(current>max)
            max=current;
        return max+1;
    }
};