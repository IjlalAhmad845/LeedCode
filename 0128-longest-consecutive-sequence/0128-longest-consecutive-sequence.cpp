class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        
        set<int> st;
        for(int i:nums)
        {
            st.insert(i);
        }
        
        int result=INT_MIN;
        int current=1;
        for(auto i=st.begin();i!=st.end();i++)
        {
            if(st.find(*i+1)!=st.end())
            {  
                current++;
            }
            else
            {
                current=1;
            }
            
            if(current>result)
                result=current;
        }
        
        return result;
    }
};