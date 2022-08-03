class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        for(int itr=0;itr<k;itr++)
        {
            vector<int> v;
            for(int i=0;i<m;i++)
                v.push_back(grid[i][n-1]);

            int temp=v[v.size()-1];
            for(int i=v.size()-1;i>0;i--)
                v[i]=v[i-1];

            v[0]=temp;

            for(int i=0;i<m;i++)
            {
                for(int j=n-1;j>0;j--)
                {
                    grid[i][j]=grid[i][j-1];
                }
            }

            for(int i=0;i<m;i++)
                grid[i][0]=v[i];
            }
        
        return grid;
    }
};