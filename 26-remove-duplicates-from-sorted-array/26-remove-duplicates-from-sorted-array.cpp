class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        
        vector<int> v;
        for(auto i=st.begin();i!=st.end();i++)
            v.push_back(*i);
        
        nums=v;
        
        return st.size();
    }
};