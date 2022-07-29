class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=-1;
        
        for(int i=0;i<word.size();i++)
            if(ch==word[i])
            {
                index=i;
                break;
            }
        
        if(index==-1)
            return word;
        
        
        for(int i=0;i<=index/2;i++)
        {
            char c=word[i];
            word[i]=word[index-i];
            word[index-i]=c;
        }
        
        return word;
    }
};