class Solution {
    public int numUniqueEmails(String[] emails) {
        
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<emails.length;i++)
        {
            String str[]=emails[i].split("@");
            
            String name[]=new String[1];
            if(!str[0].contains("+")) 
                name[0]=str[0];            
            else 
                name=str[0].split("\\+");
            
            if(name[0].contains("."))
                name[0]=name[0].replaceAll("\\.","");

            
            if(!list.contains(name[0]+"@"+str[1]))
                list.add(name[0]+"@"+str[1]);
        }
        
        return list.size();
    }
}