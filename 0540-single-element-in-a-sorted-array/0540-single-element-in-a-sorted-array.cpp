class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        set<int> st;
        
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end())
            {
                st.erase(nums[i]);
            }
            else 
            {
                st.insert(nums[i]);
            }
        }
        
        return *st.begin();
    }
};