class Solution {
    public int mostWordsFound(String[] sentences) {
        int count=0;
        
        for(int  i=0;i<sentences.length;i++)
        {
            if(sentences[i].contains(" "))
            {
                String str[]=sentences[i].split(" ");
                if(count<str.length)
                    count=str.length;
            }
        }
        
        if(count==0)
            return 1;
        return count;
    }
}