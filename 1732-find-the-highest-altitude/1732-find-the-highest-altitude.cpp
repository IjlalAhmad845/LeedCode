class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count=0;
        int max=INT_MIN;
        
        for(int i=0;i<gain.size();i++)
        {
            count+=gain[i];
            
            if(count>max)
                max=count;
        }
        
        if(max<0)
            return 0;
        return max;
    }
};