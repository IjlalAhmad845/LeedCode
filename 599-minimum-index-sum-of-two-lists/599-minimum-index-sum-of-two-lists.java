class Solution {
    public String[] findRestaurant(String[] list1, String[] list2) {
        Map<String,Integer> map=new HashMap<>();
        
        for(int i=0;i<list1.length;i++)
        {
            map.put(list1[i],i);
        }
        
        int count=Integer.MAX_VALUE;
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<list2.length;i++)
        {
            if(map.containsKey(list2[i]) && count>=i+map.get(list2[i]))
            {
                if(count>i+map.get(list2[i]))
                    list.clear();
                
                list.add(list2[i]);
                
                count=i+map.get(list2[i]);
            }
        }
        
        String[] str=new String[list.size()];
        str=list.toArray(str);
        
        return str;
    }
}