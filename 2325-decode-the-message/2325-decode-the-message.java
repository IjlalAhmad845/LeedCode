class Solution {
    public String decodeMessage(String key, String message) {
        Map<Character,Character> map=new HashMap<>();
        
        char itr='a';
        for(int i=0;i<key.length();i++)
        {
           if(key.charAt(i)!=' ' && !map.containsKey(key.charAt(i))) 
           {
               map.put(key.charAt(i),itr++);
           }
        }
        
        String str="";
        
        for(int i=0;i<message.length();i++)
        {
            if(message.charAt(i)==' ')
                str+=" ";
            else 
                str+=map.get(message.charAt(i));
        }
        
        return str;
    }
}