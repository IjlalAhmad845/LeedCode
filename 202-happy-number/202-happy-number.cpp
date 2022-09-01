class Solution {
public:
    bool isHappy(int n) {
        long num=helper(n);
        set<long> st;
        st.insert(num);
        while(num!=1)
        {
            num=helper(num);
            if(st.find(num)!=st.end())
                return false;
            else 
                st.insert(num);
        }
        
        return true;
    }
    
    long helper(long n)
    {
        long sum=0;
        while(n!=0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        
        return sum;
    }
};