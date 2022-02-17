class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        
        boolean result=false;
        for(int i=0;i<nums.length;i++)
        {
            if(map.put(nums[i],i)!=null)
            {
                result=true;
                break;
            }
        }
        
        return result;
    }
}