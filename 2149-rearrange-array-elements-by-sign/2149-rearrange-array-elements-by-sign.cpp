class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        
        for(auto i:nums)
        {
            if(i>=0)
                pos.push_back(i);
        }
        
        for(auto i:nums)
        {
            if(i<0)
                neg.push_back(i);
        }
        
        vector<int> result(pos.size()+neg.size(),0);
        
        for(int i=0;i<result.size();i++)
        {
            if(i%2==0)
                result[i]=pos[i/2];
            else 
                result[i]=neg[(i-1)/2];
        }
        
        return result;
    }
};