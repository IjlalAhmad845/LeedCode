class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> v(10001,0);
        
        for(int i=0;i<nums.size();i++)
            v[nums[i]]++;
        
        int n=nums.size()/2;
        
        for(int i=0;i<v.size();i++)
            if(v[i]==n)
                return i;
        
        return 0;
    }
};