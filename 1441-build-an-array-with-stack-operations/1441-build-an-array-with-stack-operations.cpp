class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int itr=0;
        
        vector<string> v;
        for(int i=1;i<=n;i++)
        {
            v.push_back("Push");
            if(i<target[itr])
                v.push_back("Pop");
            else itr++;
            
            if(itr==target.size())
                break;
        }
        
        return v;
    }
};