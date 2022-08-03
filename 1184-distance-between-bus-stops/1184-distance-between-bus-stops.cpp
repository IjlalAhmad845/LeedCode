class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int left=0;
        int right=0;
        
        if(start<=destination)
        {
            
            for(int i=start;i<destination;i++)
                left+=distance[i];

            for(int i=0;i<start;i++)
                right+=distance[i];

            for(int i=destination;i<distance.size();i++)
                right+=distance[i];

        }
        else
        {
            for(int i=destination;i<start;i++)
                left+=distance[i];
            
            for(int i=start;i<distance.size();i++)
                right+=distance[i];
            
            for(int i=0;i<destination;i++)
                right+=distance[i];
        }
        
        return min(left,right);
    }
};