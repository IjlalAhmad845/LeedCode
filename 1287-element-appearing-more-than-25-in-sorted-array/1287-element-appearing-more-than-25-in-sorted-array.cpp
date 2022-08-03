class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int> v(100001,0);
        
        for(int i=0;i<arr.size();i++)
            v[arr[i]]++;
        
        int n=arr.size();
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>n/4)
                return i;
        }
        
        return 0;
    }
};