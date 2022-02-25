class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        
        vector<vector<int>> result;
        cout<<m<<" "<<n;
        
        if(m*n != r*c)
            return mat;
        
        vector<int> v;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        
        int itr=0;
        for(int i=0;i<r;i++)
        {
            vector<int> v1;
            for(int j=0;j<c;j++)
            {
                v1.push_back(v[itr++]);
            }
            result.push_back(v1);
        }
        
        return result;
    }
};