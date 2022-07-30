class Solution {
public:
    vector<string> cellsInRange(string s) {
       vector<string> v;
        
        int c1=s[0];
        int r1=s[1];
        int c2=s[3];
        int r2=s[4];
        
        for(char i=c1;i<=c2;i++)
        {
            for(char j=r1;j<=r2;j++)
            {
               string s = "";
                s+=i;
                s+=j;
               v.push_back(s);
            }
        }
        
        return v;
    }
};