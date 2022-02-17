class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> map=new HashMap<>();

        if(nums.length==1)
            return false;
        
        int index1=0,index2=nums.length;
        for(int i=0;i<nums.length;i++)
        {
            if(map.containsKey(nums[i]))
            {
                if(i-map.get(nums[i])<index2-index1)
                {
                    index1=map.get(nums[i]);
                    index2=i;
                }
                map.put(nums[i],i);
            }
            else map.put(nums[i],i);
        }
        System.out.println(index1+" "+index2);
        
        if(index1==0 && index2==nums.length)
            return false;
        
        int result=index2-index1;
        
        System.out.println(result);
        
        return result<=k;
    }
}