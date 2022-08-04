class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<arr.size();i++)
        {
            v.push_back({bits(arr[i]),arr[i]});
        }
        
        sort(v.begin(),v.end(),comparator);
        
        vector<int> result;
        
        for(int i=0;i<v.size();i++)
            result.push_back(v[i].second);
        
        return result;
    }
    
    static bool comparator(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first<p2.first)
            return true;
        else if(p1.first==p2.first)
        {
            if(p1.second<=p2.second)
                return true;
            else return false;
        }
        return false;
    }
    
    int bits(int num)
    {
        int count=0;
        while(num!=0)
        {
            if(num&1==1)
                count++;
            num=num>>1;
        }
        
        return count;
    }
};