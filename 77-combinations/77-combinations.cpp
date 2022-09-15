class Solution {
    vector<vector<int>> v;
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        helper(nums,0,n,k);
        
        return v;
     
    }
    
    void helper(vector<int> nums,int i,int n,int k)
    {
        if(i>n)
            return;
        
        if(k>n-i+1)
            return;
        
        if(k==0)
        {
            v.push_back(nums);
            return;
        }
        
        vector<int> temp=nums;
        temp.push_back(i+1);
        helper(temp,i+1,n,k-1);
        temp.pop_back();
        helper(temp,i+1,n,k);
        
        return;
    }
};