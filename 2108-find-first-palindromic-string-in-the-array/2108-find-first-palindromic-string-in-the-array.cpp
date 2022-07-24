class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        bool palin;
        for(int i=0;i<words.size();i++)
        {
            palin=true;
            for(int j=0;j<words[i].size();j++)
            {
                if(words[i][j]!=words[i][words[i].size()-j-1])
                    palin=false;
            }
            
            if(palin)
               return words[i]; 
              
        }
        
        return "";
    }
};