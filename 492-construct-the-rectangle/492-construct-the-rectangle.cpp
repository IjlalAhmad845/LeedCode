class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        int l,w;
        int L,W;
        int min=INT_MAX;
        for(int i=1;i<=area;i++)
        {
            if(area%i==0)
            {
                w=i;
                l=area/w;
                
                if(l<w)
                    break;
                
                if(l-w<min)
                {
                    min=l-w;
                    L=l;
                    W=w;
                }
            }
        }
        
        return {L,W};
    }
};