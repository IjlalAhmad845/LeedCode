class Solution {
public:
    int subtractProductAndSum(int n) {
        long prod=1;
        long sum=0;
        
        
        while(n!=0)
        {
            sum+=n%10;
            prod*=n%10;
            n/=10;
        }
        
        return prod-sum;
    }
};