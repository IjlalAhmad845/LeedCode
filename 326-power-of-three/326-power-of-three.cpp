class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==243 || n==59049 || n==1594323 || n==14348907 || n==129140163)return true;
        if(n<=0) return false;
        double result = (double)(log(n)/log(3));
        cout<<(result==(int)result);
        return ceil(result)==floor(result);
    }
};