class Solution {
    public int countWords(String[] words1, String[] words2) {
        List<String> list1=new ArrayList<>();
        List<String> list2=new ArrayList<>();
        List<String> temp=new ArrayList<>();
        
        for(int i=0;i<words1.length;i++)
            if(list1.contains(words1[i]))
            {
                list1.remove(words1[i]);
                temp.add(words1[i]);
            }
            else{
                if(!temp.contains(words1[i]))
                    list1.add(words1[i]);
            } 
        
        temp.clear();
        
        for(int i=0;i<words2.length;i++)
            if(list2.contains(words2[i]))
            {
                list2.remove(words2[i]);
                temp.add(words2[i]);
            }
            else{
                if(!temp.contains(words2[i]))
                    list2.add(words2[i]);
            } 
        
        int count=0;
        
        for(int i=0;i<list1.size();i++)
            if(list2.contains(list1.get(i)))
                count++;
        
        
        return count;
    }
}