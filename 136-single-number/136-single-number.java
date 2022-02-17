class Solution {
    public int singleNumber(int[] nums) {
        List<String> list=new ArrayList<>();
        
        for(int i=0;i<nums.length;i++)
        {
            if(list.contains(nums[i]+""))
                list.remove(nums[i]+"");
            else list.add(nums[i]+"");
        }
        
        return Integer.parseInt(list.get(0));
    }
}