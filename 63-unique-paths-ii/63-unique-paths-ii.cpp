class Solution {
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<vector<int>> v(m,vector<int>(n,-1));
        
        return helper(obstacleGrid,0,0,m,n,v);
    }
    
    int helper(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<int>> &v)
    {
        if(i>m-1 || j>n-1) return 0;
 
        if(grid[i][j]==1)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
    
        if(v[i][j]!=-1)
            return v[i][j];
            
        int result = helper(grid,i+1,j,m,n,v) + helper(grid,i,j+1,m,n,v);
        
        v[i][j]=result;
            
        return result;
    }
};