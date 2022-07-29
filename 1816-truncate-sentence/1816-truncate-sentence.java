class Solution {
    public String truncateSentence(String s, int k) {
        if(!s.contains(" "))
            return s;
        
        String str[]=s.split(" ");
        
        String result="";
        
        for(int i=0;i<k;i++)
        {
            result+=str[i];
            if(i!=k-1)
                result+=" ";
        }
        
        return result;
    }
}