class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        if(comp(mat,target))
            return true;
        
        for(int i=0;i<3;i++)
        {
            transpose(mat);
            reverseMat(mat);
            if(comp(mat,target))
                return true;
        }
        
        return false;
    }
    
    bool comp(vector<vector<int>> mat, vector<vector<int>> target)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]!=target[i][j])
                    return false;
            }
        }
        
        return true;
    }
    
    void transpose(vector<vector<int>> &mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(i<j)
                {
                    swap(mat[i][j],mat[j][i]);
                }
            }
        }
    }
    
    void reverseMat(vector<vector<int>> &mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    
};