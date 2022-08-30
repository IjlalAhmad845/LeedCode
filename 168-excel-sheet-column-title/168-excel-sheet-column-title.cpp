class Solution {
    string ans="";
public:
    string convertToTitle(int columnNumber) {
        return helper(columnNumber);
    }
    
    string helper(int divide)
    {
        if(divide<=26)
        {
            string str="";
            
            char ch='A';
            ch+=divide-1;
            
            str+=ch;
            
            return str;
        }
        
        int rem=divide%26;
        string str2="";
        char ch='A';
        ch+=rem-1;
        if(rem==0) ch='Z';
        str2+=ch;
        
        if(rem==0) return helper(divide/26-1)+str2;
        return helper(divide/26)+str2;
    }
};