class Solution {
public:
    int divide(int dividend, int divisor) {
        long result = (long)dividend/divisor;
        
        if(result>INT_MAX)
            return INT_MAX;
        
        else if(result<INT_MIN)
            return INT_MIN;
        
        return result;
    }
};