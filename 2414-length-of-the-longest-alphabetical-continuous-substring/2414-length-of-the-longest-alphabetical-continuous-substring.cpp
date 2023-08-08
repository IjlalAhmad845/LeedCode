class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()==1) return 1;
        int current=1;
        int result=0;
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]-1)
                current++;
            else 
                current=1;

            result=max(current,result);
        }
        
        return result;
    }
};