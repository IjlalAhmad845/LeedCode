class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid=0;
        while(s<e)
        {
            mid=(s+e)/2;
            
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
                return mid;
            
            if(arr[mid-1]>arr[mid])
                e=mid;
            
            if(arr[mid+1]>arr[mid])
                s=mid;
        }
        
        return 0;
    }
};