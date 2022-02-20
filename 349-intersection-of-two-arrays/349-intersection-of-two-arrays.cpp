class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        
        for(int i=0;i<nums1.size();i++)
            s.insert(nums1[i]);
        
        set<int> s1;
        
        
        for (int i=0;i<nums2.size();i++) 
        {
            if(s.find(nums2[i]) != s.end())
                s1.insert(nums2[i]);
        }
        
        
        vector<int> result;
        
        set<int>::iterator itr;
        for (itr = s1.begin(); itr != s1.end(); itr++) 
          {
            result.push_back(*itr);
          }
        
        return result;
    }
};