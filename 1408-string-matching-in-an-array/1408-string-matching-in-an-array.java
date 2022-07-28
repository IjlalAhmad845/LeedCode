class Solution {
    public List<String> stringMatching(String[] words) {
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<words.length;i++)
        {
            for(int j=0;j<words.length;j++)
            {
                if(words[i].contains(words[j]) && 
                   words[i].length()!=words[j].length() &&                  
                   !list.contains(words[j]))
                    list.add(words[j]);
            }
        }
        
        return list;
    }
}