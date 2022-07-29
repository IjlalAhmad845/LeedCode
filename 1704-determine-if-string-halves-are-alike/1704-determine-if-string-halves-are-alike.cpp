class Solution {
public:
    bool halvesAreAlike(string s) {
        string str1="",str2="";
        
        int count1=0,count2=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()/2)
            {
                if(isVowel(s[i]))
                    count1++;
            }
            else 
            {
                if(isVowel(s[i]))
                    count2++;
            }
        }
        
        return count1==count2;
    }
    
    bool isVowel(char ch)
    {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
};