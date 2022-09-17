class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        for(int i=0;i<nums1.size();i++)
        {
            auto itr = find(nums2.begin(),nums2.end(),nums1[i]);
            itr++;

            int flag=0;
            
            for(auto j=itr;j!=nums2.end();j++)
            {
                if((*j)>nums1[i])
                {
                    v.push_back(*j);
                    flag=1;
                    break;
                }
            }
            
            if(flag==0)
                v.push_back(-1);
        }
        
        return v;
    }
};