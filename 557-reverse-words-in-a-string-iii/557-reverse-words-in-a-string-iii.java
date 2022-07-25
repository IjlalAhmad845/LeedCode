class Solution {
    public String reverseWords(String s) {
        String str[] = s.split(" ");
        
        for(int i=0;i<str.length;i++)
            str[i]=reverse(str[i]);
        
        String result="";
        
        for(int i=0;i<str.length;i++)
        {
            result+=str[i];
            
            if(i!=str.length-1)
                result+=" ";
        }
        
        return result;
    }
    
    public String reverse(String s)
    {
        String str="";
        for(int i=s.length()-1;i>=0;i--)
        {
            str+=s.charAt(i);
        }
        
        return str;
    }
}