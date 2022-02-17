class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer,Integer> map=new HashMap<>();
        
        int index1=0,index2=0;
        for(int i=0;i<numbers.length;i++)
        {
            if(map.containsKey(target-numbers[i]))
            {
                index1=map.get(target-numbers[i]);
                index2=i;
            }
            else map.put(numbers[i],i);
        }
        
        int arr[]={index1+1,index2+1};
        return arr;
    }
}