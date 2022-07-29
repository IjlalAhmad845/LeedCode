class Solution {
    public String sortSentence(String s) {
        String str[]=s.split(" ");
        
        HashMap<String,String> map=new HashMap<>();
        
        for(int i=0;i<str.length;i++)
        {
            map.put(str[i].substring(str[i].length()-1),str[i].substring(0,str[i].length()-1));
        }
        
        String result="";
        
        for(int i=1;i<=str.length;i++)
        {
            result+=map.get(String.valueOf(i));
            
            if(i!=str.length)
                result+=" ";
        }
        
        return result;
    }
}