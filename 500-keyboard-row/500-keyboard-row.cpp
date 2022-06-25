class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";
        
        int n = words.size();
        int hasInRow1,hasInRow2,hasInRow3;
        
        vector<string> result;
        
        for(int i=0;i<n;i++)
        {
             hasInRow1=hasInRow2=hasInRow3=0;
            for(int j=0;j<words[i].length();j++)
            {
                if(row1.find(words[i][j])<row1.length())hasInRow1++;
                if(row2.find(words[i][j])<row2.length())hasInRow2++;
                if(row3.find(words[i][j])<row3.length())hasInRow3++;
            }
            cout<<hasInRow1<<","<<hasInRow2<<","<<hasInRow3<<" ";
            if(hasInRow1 == words[i].length() || hasInRow2 == words[i].length() ||hasInRow3 == words[i].length())
                result.push_back(words[i]);
                
        }
        
        
        return result;
    }
};