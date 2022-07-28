class Solution {
    public String reorderSpaces(String text) {
        String str[]=text.split(" ");
        
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<str.length;i++)
        {
            for(int j=0;j<str[i].length();j++)
                if(str[i].charAt(j)!=' ')
                {
                    list.add(str[i]);
                    break;
                }
        }
        
       int sps=spaces(text);
        
        if(sps==0)
            return text;
        
        int remSps;
        if(list.size()>1)
        {
            remSps=sps%(list.size()-1);
            sps=sps/(list.size()-1);
        }
        else
        {
            remSps=sps;
            sps=0;
        }
        
       
        String result="";
        
        for(int i=0;i<list.size()-1;i++)
        {
            result+=list.get(i);
            for(int j=0;j<sps;j++)
                result+=" ";
        }
        
        result+=list.get(list.size()-1);
        
        for(int i=0;i<remSps;i++)
            result+=" ";
        
        return result;
    }
    
    int spaces(String s){
        int count=0;
        
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)==' ')
                count++;
        
        return count;
    }
}