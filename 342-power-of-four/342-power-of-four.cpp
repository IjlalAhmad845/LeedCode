class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        double result = log(n)/log(4);
        
        return result==(int)result;
    }
};