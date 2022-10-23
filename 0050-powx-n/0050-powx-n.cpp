class Solution {
public:
    double myPow(double x, int n) {
        if(n>=0)
            return power(x,n);
        else 
        {
            long p=n;
            return 1/power(x,-p);
        } 
    }
    
    double power(double x,long n)
    {
        if(n==0) return 1;
        if(n==1) return x;
        
        double ans = power(x,n/2);
        ans*=ans;
        
        if(n%2==1)
            ans*=x;
        
        return ans;
    }
};