class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        set<int> st;
        
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end())
                st.erase(nums[i]);
            else st.insert(nums[i]);
        }
        
        vector<int> v(st.begin(),st.end());
        return v;
    }
};