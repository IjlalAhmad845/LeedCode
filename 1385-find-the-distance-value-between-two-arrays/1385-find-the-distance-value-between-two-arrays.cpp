class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        
        for(int i=0;i<arr1.size();i++)
        {
            int flag=0;
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                    flag=1;
            }
            
            if(flag==0)
                count++;
        }
        
        return count;
    }
    
    int abs(int x)
    {
        if(x<0)
            return -x;
        return x;
    }
};