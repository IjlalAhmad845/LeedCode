class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        
        
        int j=0;
        int counter=0;
        for(int i=s.length()-1;i>=0;i--)
        {
           
            
            if(counter==1 && s[i]==' ')
                break;
            
            if(s[i]!=' ')
            {
                counter=1;
                j++;
            };
            
        }
        
        return j;
    }

};