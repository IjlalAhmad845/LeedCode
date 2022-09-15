class Solution {
    vector<vector<int>> v;
    set<vector<int>> st;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        
        helper(nums,temp,0);
        
        for(auto s:st)
        {
            v.push_back(s);
        }
        
        return v;
    }
    
    void helper(vector<int> &nums,vector<int> &temp,int i)
    {
        if(i==nums.size())
        {   
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }
        
        vector<int> temp2=temp;
        
        helper(nums,temp2,i+1);
        temp2.push_back(nums[i]);
        helper(nums,temp2,i+1);
        
        return;
    }
};