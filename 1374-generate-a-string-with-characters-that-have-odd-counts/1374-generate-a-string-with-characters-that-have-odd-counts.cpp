class Solution {
public:
    string generateTheString(int n) {
        
        if(n==1)
            return "a";
        if(n==2)
            return "ab";
        
        string s="";
        
        if(n%2==0)
        {
            s+="a";
        
            for(int i=0;i<n-1;i++)
                s+="b";
            
            return s;
        }
        else 
        {
               s+="ab";
        
            for(int i=0;i<n-2;i++)
                s+="c";
            
            return s;
        }
    }
};