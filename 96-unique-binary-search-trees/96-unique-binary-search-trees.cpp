class Solution {

public:
    int numTrees(int n) {
        vector<int> v(20,-1);
        
        return catalan(n,v);
    }
    
    long long catalan(int n,vector<int> &v)
    {
        
        if(n<=1)
            return 1;
        
        if(v[n]!=-1)
            return v[n];
        
        long long sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=catalan(i,v)*catalan(n-i-1,v);
       }
        
        v[n]=sum;
        return sum;
    }
};