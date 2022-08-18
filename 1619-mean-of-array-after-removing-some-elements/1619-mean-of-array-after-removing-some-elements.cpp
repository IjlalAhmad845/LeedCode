class Solution {
public:
    double trimMean(vector<int>& arr) {
        int remove=arr.size()*5/100;
        
        sort(arr.begin(),arr.end());
        
        int sum=0;
        
        for(int i=remove;i<arr.size()-remove;i++)
        {
            sum+=arr[i];
        }
        
        return (double)sum/(arr.size()-2*remove);
    }
};