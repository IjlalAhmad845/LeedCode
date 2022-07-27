class Solution {
    public int[] shortestToChar(String s, char c) {
        int[] arr=new int[s.length()];
        
        
        for(int i=0;i<s.length();i++)
        {
            arr[i]=Math.abs(i-s.indexOf(c,i));
        }
        
        for(int i=s.length()-1;i>=0;i--)
        {
            int val=s.lastIndexOf(c,i);
            
            if(val!=-1)
                arr[i]=Math.min(i-val,arr[i]);
        }
        
       return arr;   
    }
}