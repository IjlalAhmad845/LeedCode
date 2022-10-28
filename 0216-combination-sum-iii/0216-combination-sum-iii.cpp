class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        
        helper(1,n,temp,ans,k);
        
        return ans;
    }
    
      void helper(int i,int target,vector<int>&temp,vector<vector<int>>&ans,int k)
    {
        if(target==0 && k==0)
        {
            ans.push_back(temp);
            return;
        }
        
        if(target<0)
            return;
        
        if(i==10)
        {
            return;
        }
        
        vector<int> temp2=temp;
        
        temp2.push_back(i);
        helper(i+1,target-i,temp2,ans,k-1);
        temp2.pop_back();
        
        helper(i+1,target,temp2,ans,k);
        
        return;
    }
};