class Solution {
    public String toGoatLatin(String sentence) {
        String str[]=sentence.split(" ");
        
        for(int i=0;i<str.length;i++)
        {
            if(str[i].charAt(0)=='a' || str[i].charAt(0)=='e' ||
               str[i].charAt(0)=='i' || str[i].charAt(0)=='o' ||
               str[i].charAt(0)=='u' ||
               str[i].charAt(0)=='A' || str[i].charAt(0)=='E' ||
               str[i].charAt(0)=='I' || str[i].charAt(0)=='O' ||
               str[i].charAt(0)=='U')
                str[i]+="ma";
            else 
                str[i]=str[i].substring(1)+str[i].charAt(0)+"ma";
            
            for(int j=0;j<=i;j++)
                str[i]+="a";
        }
        
        
        String result="";
        for(int i=0;i<str.length;i++)
        {
            result+=str[i];
            if(i!=str.length-1)
                result+=" ";
        }
        
        return result;
    }
}