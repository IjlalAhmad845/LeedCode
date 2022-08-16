class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        int sum=n*(n+1)/2;
        
        for(int i=0;i<n;i++)
        {
            int sum2=0;
            set<int> st;
            for(int j=0;j<n;j++)
            {
                sum2+=matrix[i][j];
                if(st.find(matrix[i][j])!=st.end())
                    return false;
                else st.insert(matrix[i][j]);
            }
            
            if(sum2!=sum)
                return false;
        }
        
        for(int i=0;i<n;i++)
        {
            int sum2=0;
            set<int> st;
            for(int j=0;j<n;j++)
            {
                sum2+=matrix[j][i];
                if(st.find(matrix[j][i])!=st.end())
                    return false;
                else st.insert(matrix[j][i]);
            }
            
            if(sum2!=sum)
                return false;
        }
        
        return true;
    }
};