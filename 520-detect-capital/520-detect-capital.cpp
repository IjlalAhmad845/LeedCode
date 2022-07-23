class Solution {
public:
    bool detectCapitalUse(string word) {
        if(isCapital(word[0]))
        {
            if(word.size()==1)
                return true;
            
           if(isCapital(word[1]))
           {
              int flag=0;
               
               for(int i=1;i<word.size();i++)
               {
                   if(!isCapital(word[i]))
                       return false;
               }
               
               return true;
           }
            else
            {
                 int flag=0;
               
               for(int i=1;i<word.size();i++)
               {
                   if(isCapital(word[i]))
                       return false;
               }
               
               return true;
            }
        }
        else
        {
         for(int i=0;i<word.size();i++)
             if(isCapital(word[i]))
                 return false;
            
            return true;
        }
    }
    
    bool isCapital(char ch)
    {
        return ch>='A' && ch<='Z';
    }
};