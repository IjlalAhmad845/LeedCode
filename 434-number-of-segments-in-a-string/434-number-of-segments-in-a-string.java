class Solution {
    public int countSegments(String s) {
        if(s.equals("")) return 0;
              
        String str[]=s.split(" ");
        
        int count = 0;
        for(int i=0;i<str.length;i++)
        {
            for(int j=0;j<str[i].length();j++)
                if(str[i].charAt(j)!=' ')
                {
                    count++;
                    break;
                }
                    
        }
        
        return count;
    }
}