class Solution {
    public String capitalizeTitle(String title) {
        title = title.toLowerCase();
       
        
        String s[] = title.split(" ");
         title="";
        
        for(int i=0;i<s.length;i++)
        {
      
            if(s[i].length()>=3)
            {
                s[i]=s[i].substring(0,1).toUpperCase()+s[i].substring(1).toLowerCase();
            }
            title+=s[i];
            
            if(i!=s.length-1)
                title+=" ";
        }
        
        
        return title;
    }
}