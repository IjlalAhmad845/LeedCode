class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> m;
        
        for(auto i:nums)
        {
            m[i]++;
        }
        
        vector<int> v;
        
        for(auto i:nums)
        {
            if(m.find(i-1)==m.end() && m.find(i+1)==m.end() && m[i]==1)
                v.push_back(i);
        }
        return v;
    }
};