class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        
        vector<int> result;
        int itr=0;

        
        for(int i=0;i<n;i++)
        {
            result.push_back(arr[itr++]);
            if(arr[i]==0)
                result.push_back(0);
            
        }
        
        arr.clear();
        
        for(int i=0;i<n;i++)
            arr.push_back(result[i]);
        
    }
};