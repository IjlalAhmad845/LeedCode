class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        String str[]=text.split(" ");
        
        List<String> list=new ArrayList<>();
        
        for(int i=1;i<str.length;i++)
        {
            if(str[i].equals(second) && str[i-1].equals(first))
            {
                if(i+1<str.length)
                 list.add(str[i+1]);
            }
        }
        
        
        String[] result=new String[list.size()];
        result = list.toArray(result);
        
        return result;
    }
}