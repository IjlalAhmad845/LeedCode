class Solution {
public:
    int getLucky(string s, int k) {
        string str="";
        
        for(int i=0;i<s.size();i++)
            str+=to_string((s[i]-96));
        
        long result=0;
        
        for(int i=0;i<str.size();i++)
        {
            result+=str[i]-'0';
            // cout<<str[i]<<",";
        }
        k--;
        
        
        int result1=0;
        while(k--)
        {
            result1=0;
            while(result!=0)
            {
                result1+=result%10;
                result/=10;
            }
            
            result=result1;
            cout<<result<<" ";
        }
    
            
        return result;
    }
};