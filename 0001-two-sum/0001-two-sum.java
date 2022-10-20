class Solution {
    public int[] twoSum(int[] nums, int target) {
            HashMap<Integer,Integer> map=new HashMap<>();
        
        int[] v=new int[2];
        for(int i=0;i<nums.length;i++)
        {
            if(map.containsKey(target-nums[i]))
            {
                v[0]=map.get(target-nums[i]);
                v[1]=i;
            }
            map.put(nums[i],i);
        }
        
        return v;
    }
}