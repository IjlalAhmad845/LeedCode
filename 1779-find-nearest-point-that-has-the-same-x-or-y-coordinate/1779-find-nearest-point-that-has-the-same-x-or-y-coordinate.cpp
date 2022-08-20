class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
         
        int index=-1;
        int min=INT_MAX;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                int temp=dist(x,points[i][0],y,points[i][1]);
                if(temp<min)
                {
                    min=temp;
                    index=i;
                }
            }
        }
        
        return index;
    }
    
    int dist(int x1,int x2,int y1, int y2)
    {
      return abs(x1-x2)+abs(y1-y2);  
    }
    
    int abs(int x)
    {
        if(x<0)
            return -x;
        return x;
    }
};