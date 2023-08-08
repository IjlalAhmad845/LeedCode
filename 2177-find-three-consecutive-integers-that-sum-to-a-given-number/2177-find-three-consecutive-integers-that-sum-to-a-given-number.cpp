class Solution {
public:
    vector<long long> sumOfThree(long long num) {      
        long long a=num/3-1;
        long long b=num/3;
        long long c=num/3+1;

        if(a+b+c==num)
            return {a,b,c};
        
        return {};
    }
};