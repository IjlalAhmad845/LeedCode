class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1,st2;
        
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end())
                st1.insert(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end())
                st2.insert(nums2[i]);
        }
        
        vector<int> v1(st1.begin(),st1.end());
        vector<int> v2(st2.begin(),st2.end());
        
        return {v1,v2};
    }
};