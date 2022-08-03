class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<string>> v(3,vector<string>(3,"0"));
        
        for(int i=0;i<moves.size();i++)
        {
           int r=moves[i][0];
           int c=moves[i][1];
            
            if(i%2==0)
                v[r][c]="A";
            else 
                v[r][c]="B";
        }
        
        for(int i=0;i<3;i++)
        {   
            for(int j=0;j<3;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
        
        //horizontal rows
        if(v[0][0]==v[0][1] && v[0][1]==v[0][2] && v[0][0]!="0")
            return v[0][0];
        
        if(v[1][0]==v[1][1] && v[1][1]==v[1][2] && v[1][0]!="0")
            return v[1][0];
        
        if(v[2][0]==v[2][1] && v[2][1]==v[2][2] && v[2][0]!="0")
            return v[2][0];
        
        
        //vertical rows
        if(v[0][0]==v[1][0] && v[1][0]==v[2][0] && v[0][0]!="0")
            return v[0][0];
    
        if(v[0][1]==v[1][1] && v[1][1]==v[2][1] && v[0][1]!="0")
            return v[0][1];
        
        if(v[0][2]==v[1][2] && v[1][2]==v[2][2] && v[0][2]!="0")
            return v[0][2];
        
        //diagonals
        if(v[0][0]==v[1][1] && v[1][1]==v[2][2] && v[0][0]!="0")
            return v[0][0];
        
        if(v[2][0]==v[1][1] && v[1][1]==v[0][2] && v[2][0]!="0")
            return v[2][0];
        
        //checking for pending
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]=="0")
                    return "Pending";
            }
        }
        
        return "Draw";
    }

};