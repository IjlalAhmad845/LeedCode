class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1(1001,0);
        
        for(int i=0;i<nums1.size();i++)
        {
            v1[nums1[i]]++;
        }
      
        vector<int> result;
        
        for(int i=0;i<nums2.size();i++)
        {
            if(v1[nums2[i]]>0)
            {
                result.push_back(nums2[i]);
                v1[nums2[i]]--;
            }
        }
        
        return result;
    }
};