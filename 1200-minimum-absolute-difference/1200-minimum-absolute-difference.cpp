class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int min=INT_MAX;
        
        for(int i=0;i<arr.size()-1;i++)
            if(min>arr[i+1]-arr[i])
                min=arr[i+1]-arr[i];
        
        vector<vector<int>> v;
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==min)
            {
                v.push_back({arr[i],arr[i+1]});
            }
        }
        
        return v;
    }
};