class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        
        vector<int> v(max+1,0);
        
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        
        nums.clear();
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==2)
                nums.push_back(i);
        }
        
        return nums;
    }
};