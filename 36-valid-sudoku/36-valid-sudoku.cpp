class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> v;
        
        //checking rows
        for(int i=0;i<board.size();i++)
        {
            v.clear();
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]!='.')
                    v.push_back(board[i][j]);
            }
            
            if(!check(v))
                return false;
        }
        
        //checking columns
        for(int i=0;i<board.size();i++)
        {
            v.clear();
            for(int j=0;j<board[i].size();j++)
            {
                if(board[j][i]!='.')
                    v.push_back(board[j][i]);
            }
            
            if(!check(v))
                return false;
        }
        
        //checking individual 3x3 box
        for(int l=0;l<3;l++)
        {
            for(int m=0;m<3;m++)
            {
                v.clear();
                for(int i=m*3;i<m*3+3;i++)
                {  
                    for(int j=l*3;j<l*3+3;j++)
                    {
                        if(board[i][j]!='.')
                            v.push_back(board[i][j]);
                    }

                }
                
                if(!check(v))
                    return false;
            }
        }
        
        return true;
    }
    
    bool check(vector<char> v)
    {
        set<char> st;
        
        for(int i=0;i<v.size();i++)
        {
            if(st.find(v[i])!=st.end())
                return false;
            st.insert(v[i]);
        }
        
        return true;
    }
};