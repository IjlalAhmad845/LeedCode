class Solution {
public:
    bool squareIsWhite(string coordinates) {
          vector<vector<int>> v;
        
        for(int i=0;i<8;i++)
        {
            vector<int> temp;
            for(int j=0;j<8;j++)
            {
                if(i%2+j%2<2)
                    temp.push_back(i%2+j%2);
                else 
                    temp.push_back(0);
                
            }
            
            v.push_back(temp);
        }
        
       return v[coordinates[0]-97][(coordinates[1]-'0')-1]==1;
    }
};