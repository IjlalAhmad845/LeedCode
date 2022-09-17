class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int index=(i+1)%n;
            
            int flag=0;
            while(index!=i)
            {
                if(nums[index]>nums[i])
                {
                    v.push_back(nums[index]);
                    flag=1;
                    break;
                }
                index=(index+1)%n;
            }
            
            if(flag==0)
                v.push_back(-1);
        }
        
        return v;
    }
};