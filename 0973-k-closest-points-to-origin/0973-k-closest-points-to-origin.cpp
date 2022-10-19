class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> p;
        
        int x,y;
        for(int i=0;i<points.size();i++)
        {
            x=points[i][0];
            y=points[i][1];
            p.push({dist(0,0,x,y),points[i]});
        }
        
        vector<vector<int>> v;
        
        while(!p.empty() && k--)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        
        return v;
    }
    
    int dist(int x1,int y1,int x2,int y2)
    {
        return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    }
};