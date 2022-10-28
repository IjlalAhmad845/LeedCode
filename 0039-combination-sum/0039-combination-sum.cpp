class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        
        helper(0,target,candidates,temp,ans);
        
        return ans;
    }
    
    void helper(int i,int target,vector<int>& candidates,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        
        if(target<0)
            return;
        
        if(i==candidates.size())
        {
            return;
        }
        
        vector<int> temp2=temp;
        
        temp2.push_back(candidates[i]);
        helper(i,target-candidates[i],candidates,temp2,ans);
        temp2.pop_back();
        
        helper(i+1,target,candidates,temp2,ans);
        
        return;
    }
};