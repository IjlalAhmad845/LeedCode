class Solution {
    public int numDifferentIntegers(String word) {
      String str="";
        
        for(int i=0;i<word.length();i++)
            if(Character.isDigit(word.charAt(i)))
                str+=word.charAt(i);
            else 
                str+=" ";
        
        String str2[]=str.split(" ");
        
        for(int i=0;i<str2.length;i++)
             while(str2[i].length()!=0 &&str2[i].length()!=1 && str2[i].charAt(0)=='0')
                    str2[i]=str2[i].substring(1);
        
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<str2.length;i++)
            if(str2[i]!="" && !list.contains(str2[i]))
            {
                list.add(str2[i]);
            }
        
        
        return list.size();
    }
}