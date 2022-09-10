class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<vector<int>> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            zero(matrix,v[i][0],v[i][1]);
        }
    }
    
    void zero(vector<vector<int>>& mat,int x,int y)
    {
        for(int i=0;i<mat.size();i++)
        {
            mat[i][y]=0;
        }
        
        for(int j=0;j<mat[0].size();j++)
        {
            mat[x][j]=0;
        }
    }
};