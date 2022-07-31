class Solution {
    public String greatestLetter(String s) {
        char ch=64;
        
        for(int i=0;i<s.length();i++)
        {
            if(Character.isLowerCase(s.charAt(i)))
            {
                if(s.contains((s.charAt(i)+"").toUpperCase()) && ch<s.charAt(i)-32)
                    ch=(char)(s.charAt(i)-32);
            }
        }
        
        if(ch==64)
            return "";
        return String.valueOf(ch);
    }
}