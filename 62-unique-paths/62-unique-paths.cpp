class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m+1,vector<int>(n+1,-1));
        
        return helper(m,n,v);
    }
    
    int helper(int m,int n,vector<vector<int>> &v)
    {
        if(m==1 || n==1)
            return 1;
        
        if(v[m][n]!=-1)
            return v[m][n];
        
        int result=helper(m-1,n,v)+helper(m,n-1,v);
        
        v[m][n]=result;
        
        return result;
    }
};