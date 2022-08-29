class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> v(1001,0);
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                v[nums[i+1]]++;
            }
        }
        
        int max=INT_MIN;
        int freq=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>freq)
            {
                freq=v[i];
                max=i;
            }
        }
        
        return max;
    }
};