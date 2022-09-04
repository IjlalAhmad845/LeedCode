class Solution {
public:
    int totalMoney(int n) {
        int mondays=n/7;
        int left=n%7;
        
        int sum=0;
        int i=0;
        for(i=0;i<mondays;i++)
        {
            for(int j=1;j<=7;j++)
            {
                sum+=i+j;
            }
        }
        
        for(int j=1;j<=left;j++)
        {
            sum+=i+j;
        }
        
        return sum;
    }
};