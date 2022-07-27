class Solution {
public:
    int maxPower(string s) {
       s+=";";
        
        int count=1;
        int maxCount=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
                count++;
            else 
                count=1;
            
            if(count>maxCount)
                maxCount=count;
        }
        
        return maxCount;
    }
};