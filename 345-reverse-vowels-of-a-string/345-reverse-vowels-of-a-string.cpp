class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        
        for(int i=0;i<s.size();i++)
            if(isVowel(s[i]))
                v.push_back(s[i]);
        
        char temp;
        
        for(int i=0;i<v.size()/2;i++)
        {
            temp=v[i];
            v[i]=v[v.size()-i-1];
            v[v.size()-i-1]=temp;
        }
        
        string result="";
        
        int itr=0;
        for(int i=0;i<s.size();i++)
            if(isVowel(s[i]))
                result+=v[itr++];
            else 
                result+=s[i];
        
        return result;
    }
    
    bool isVowel(char c)
    {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }

};