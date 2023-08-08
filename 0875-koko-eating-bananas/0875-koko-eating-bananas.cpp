class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 0;
        int max = *max_element(piles.begin(),piles.end()); 
        
        int result;
        while(min<=max)
        {
            int k = (min+max)/2;
            
            if(k==0)
                break;
            int i=0;
            for(int p:piles)
            {
                if(p%k==0)
                    i+=p/k;
                else 
                    i+=p/k+1;
            }
            
            if(i<=h)
            {
                result=k;
                max=k-1;
            }
            else 
            {
                min=k+1;
            }
        }
        
        return result;
    }
};