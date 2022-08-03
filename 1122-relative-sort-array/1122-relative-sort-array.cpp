class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> v(1001,0);
        
        for(int i=0;i<arr1.size();i++)
            v[arr1[i]]++;
        
        vector<int> result;
        int temp;
        for(int i=0;i<arr2.size();i++)
        {
            temp=v[arr2[i]];
            for(int j=0;j<temp;j++)
            {
                result.push_back(arr2[i]);
                v[arr2[i]]--;
            }
        }
        
        for(int i=0;i<v.size();i++)
        {   
            if(v[i]>0)
            {
                result.push_back(i);
                v[i]--;
                i--;
            }
        }
        
        return result;
    }
};