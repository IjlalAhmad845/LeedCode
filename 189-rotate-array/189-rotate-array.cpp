class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        int n=nums.size();
        
        while(n-k<0)
        {
            k=k-n;
        }
        
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[(n-k+i)%n]);
        }
        
        nums=v;
    }
};