class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int i=1;
        
        while(true)
        {
            int flag=0;
            int sum=i;
            for(int j=0;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum<1)
                {
                    i++;
                    flag=1;
                    break;
                }
            }
            
            if(flag==0)
                break;
        }
        
        return i;
    }
};