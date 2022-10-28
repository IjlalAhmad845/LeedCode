class Solution {
        vector<vector<int>> ans;
        set<vector<int>> st;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int> temp;
           
            sort(candidates.begin(),candidates.end());
            helper(0,target,candidates,temp);
        
            return ans;
    }
    
     void helper(int i,int target,vector<int>& candidates,vector<int>&temp)
    {
        if(target<0)
            return;
         
        if(target==0)
        {
            
            if(st.find(temp)==st.end())
            {
                st.insert(temp);
                ans.push_back(temp);
            }
                
            return;
        }
    
        
        if(i==candidates.size())
        {
            return;
        }
        
        vector<int> temp2=temp;
         
        
        temp2.push_back(candidates[i]);
        helper(i+1,target-candidates[i],candidates,temp2);
        temp2.pop_back();
        
        while(i+1<candidates.size() && candidates[i]==candidates[i+1])i++;
         
        helper(i+1,target,candidates,temp2);
        
        return;
    }
};