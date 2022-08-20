class Solution {
    public String kthDistinct(String[] arr, int k) {
        List<String> list=new ArrayList<>();
        List<String> list2=new ArrayList<>();
        
        for(int i=0;i<arr.length;i++)
        {
            if(list.contains(arr[i]))
            {
                list.remove(arr[i]);
                list2.add(arr[i]);
            }
            else {
                if(!list2.contains(arr[i]))
                    list.add(arr[i]);
            }
        }
        
        if(k-1<list.size())
            return list.get(k-1);
        return "";
    }
}