class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int s1=0,s2=0,s3=0;
        
        for(int i=0;i<firstWord.size();i++)
            s1=s1*10+(firstWord[i]-97);
        
         for(int i=0;i<secondWord.size();i++)
            s2=s2*10+(secondWord[i]-97);
        
         for(int i=0;i<targetWord.size();i++)
            s3=s3*10+(targetWord[i]-97);
        
        return s1+s2==s3;
    }
};