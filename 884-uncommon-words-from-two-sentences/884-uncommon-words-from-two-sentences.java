class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String str1[] = s1.split(" ");
        String str2[] = s2.split(" ");
        
        List<String> list=new ArrayList<>();
        List<String> list2=new ArrayList<>();
        
        for(int i=0;i<str1.length;i++)
            if(!list.contains(str1[i]) && !list2.contains(str1[i]))
                list.add(str1[i]);
            else 
            {
                list.remove(str1[i]);
                list2.add(str1[i]);
            }
        
        for(int i=0;i<str2.length;i++)
            if(!list.contains(str2[i]) && !list2.contains(str2[i]))
                list.add(str2[i]);
            else 
            { 
                list.remove(str2[i]);
                list2.add(str2[i]);
            }
        
        String[] result=new String[list.size()];
        result = list.toArray(result);
        
        return result;
    }
}