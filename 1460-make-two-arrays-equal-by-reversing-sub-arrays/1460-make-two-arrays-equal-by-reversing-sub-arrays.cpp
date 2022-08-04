class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> v1(1001,0),v2(1001,0);
        
        for(int i=0;i<target.size();i++)
        {
            v1[target[i]]++;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            v2[arr[i]]++;
        }
        
        if(v1.size()!=v2.size())
            return false;
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
        
        return true;
    }
};