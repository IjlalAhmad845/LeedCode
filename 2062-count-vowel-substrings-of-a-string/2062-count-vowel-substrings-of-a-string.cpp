class Solution {
public:
    int countVowelSubstrings(string word) {
    
        int count=0;
        for(int i=0;i<word.size();i++)
        {
            string temp="";
            for(int j=i;j<word.size();j++)
            {
               temp+=word[j];
                // cout<<temp<<"\n";
                if(check(temp))
                    count++;
                
            }
        }
        
        return count;
    }
    
    bool check(string s)
    {
        if(s.size()<5)
            return false;
       vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++)
            v[s[i]-97]++;
   
        for(int i=0;i<26;i++)
        {    
            if(v[i]>0 && !(i==0 || i==4 || i==8 || i==14 || i==20))
                return false;
            if(v[i]==0 && (i==0 || i==4 || i==8 || i==14 || i==20))
                return false;
        }
        
        return true;
    
    }
};