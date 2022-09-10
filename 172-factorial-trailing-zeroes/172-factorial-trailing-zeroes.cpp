class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        
        int i=1;
        
        while(pow(5,i)<=n)
        {
            count+=n/pow(5,i);
            i++;
        }
        
        return count;
    }
};