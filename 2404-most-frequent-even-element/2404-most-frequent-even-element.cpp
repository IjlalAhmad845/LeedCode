class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> v(1e5+1,0);
        
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        
        int result=-1;
        int freq=INT_MIN;
   
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]!=0 && i%2==0)
            {
                if(v[i]>=freq)
                {
                    freq=v[i];
                    result=i;
                }
            }
        }
        
        return result;
    }
};