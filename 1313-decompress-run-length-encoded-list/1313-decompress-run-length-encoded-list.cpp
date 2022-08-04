class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int f,v;
        
        vector<int> result;
        
        for(int i=0;i<nums.size();i+=2)
        {
            f=nums[i];
            v=nums[i+1];
            
            for(int j=0;j<f;j++)
                result.push_back(v);
        }
        
        return result;
    }
};