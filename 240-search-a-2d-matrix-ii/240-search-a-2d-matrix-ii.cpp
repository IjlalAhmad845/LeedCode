class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //starting from left bottom 
        int i=matrix.size()-1,j=0;
        
        while(i!=-1 && j!=matrix[0].size())
        {
            if(matrix[i][j]==target)
                return true;
            
            //moving up
            if(matrix[i][j]>target)
                i--;
            //moving right
            else if(matrix[i][j]<target)
                j++;
        }
        
        return false;
    }
};