class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
      vector<int> v(1001,0);
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                v[nums[i][j]]++;
            }
        }
        
        int n=nums.size();
        
        vector<int> v1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==n)
                v1.push_back(i);
        }
        
        return v1;
    }
};