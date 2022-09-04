class Solution {
public:
    int numberOfMatches(int n) {
        return helper(n,0);
    }
    
    int helper(int n,int sum)
    {
        if(n==1)
            return sum;
        
        int teams=n%2==0?n/2:(n-1)/2;
        
        return helper(teams,sum+n-teams);
    }
};