class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        
        vector<int> v;
        
        v.push_back(-1);
        int max=INT_MIN;
        
        for(int i=arr.size()-1;i>0;i--)
        {
            if(max<arr[i])
                max=arr[i];
            
            v.push_back(max);
        }
        
        int temp;
        for(int i=0;i<v.size()/2;i++)
        {
            temp=v[i];
            v[i]=v[v.size()-i-1];
            v[v.size()-i-1]=temp;
        }
        
        return v;
    }
};