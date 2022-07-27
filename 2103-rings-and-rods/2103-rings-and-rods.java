class Solution {
    public int countPoints(String rings) {
        String str[]=new String[10];
        
        for(int i=0;i<10;i++)
            str[i]="";
        
        for(int i=0;i<rings.length();i+=2)
        {
            str[rings.charAt(i+1)-'0']+=rings.charAt(i);
        }
        
        int count=0;
        for(int i=0;i<10;i++)
        {
            if(str[i].contains("R") && str[i].contains("G") && str[i].contains("B"))
                count++;
        }
        
        return count;
    }
    
    
}