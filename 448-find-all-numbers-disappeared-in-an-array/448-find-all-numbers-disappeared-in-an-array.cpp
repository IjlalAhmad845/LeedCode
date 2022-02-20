class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        vector<int> result;
        
        for(int i=1;i<=n;i++)
            if(s.find(i)==s.end())
                result.push_back(i);
        
        return result;
    }
};