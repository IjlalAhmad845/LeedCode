class Solution {
    public int maxScore(String s) {
        
        int max=0;
        int sum=0;
        
        for(int i=0;i<s.length();i++)
        {
            String left=s.substring(0,i);
            String right=s.substring(i);
            
            if(left.length()==0 || right.length()==0)
                continue;
            
            sum=zeroes(left)+ones(right);
            
            if(sum>max)
                max=sum;
        }
        
        return max;
    }
    
    int zeroes(String s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)=='0')
                count++;
        return count;
    }
    
      int ones(String s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)=='1')
                count++;
        return count;
    }
}