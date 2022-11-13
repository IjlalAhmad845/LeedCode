class Solution {
    public String reverseWords(String s) {
        String arr[] = s.split(" ");
        
        ArrayList<String> list = new ArrayList<>();
        
        for(int i=0;i<arr.length;i++)
        {
            if(!arr[i].equals(""))
                list.add(arr[i]);
        }
        
        String result="";
        
        for(int i=list.size()-1;i>=0;i--)
        {
            result+=list.get(i);
            
            if(i!=0)
                result+=" ";
        }
        
        return result;
    }
}