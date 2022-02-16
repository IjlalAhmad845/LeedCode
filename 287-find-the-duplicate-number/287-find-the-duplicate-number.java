class Solution {
    public int findDuplicate(int[] nums) {
        
        HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
        int repeated=0;
        for(int i=0;i<nums.length;i++){
            if(map.put(nums[i],i)!=null)
            repeated=nums[i];
        }
        
        return repeated;
    }
}