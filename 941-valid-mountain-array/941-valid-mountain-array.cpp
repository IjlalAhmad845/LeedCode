class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        
        if(arr[0]>=arr[1])
            return false;
        
        int temp1=0,temp2=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
                return false;
            
            if(arr[i]<arr[i+1])
                temp1=0;
            else temp1=temp2=1;
            
            if(temp1!=temp2)
                return false;
        }
        
        if(temp2==0)
            return false;
        
        return true;
    }
};