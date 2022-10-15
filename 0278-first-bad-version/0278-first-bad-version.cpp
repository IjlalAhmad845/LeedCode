// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long start=1,end=n,mid;
        while(start<=end)
        {
            mid=(end+start)/2;
            bool result = isBadVersion(mid);
            if(result)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        
        return start;
    }
};