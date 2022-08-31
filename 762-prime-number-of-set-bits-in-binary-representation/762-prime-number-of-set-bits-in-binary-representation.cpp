class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int count=0;
       for(int i=left;i<=right;i++)
       {
           if(isPrime(bits(i)))
               count++;
       }
        return count;
    }
    
    int bits(int n)
    {
        return __builtin_popcount(n);
    }
    bool isPrime(int n)
    {
        if(n==1 || n==0)
            return false;
        
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        
        return true;
    }
};