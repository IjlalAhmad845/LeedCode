class Solution {
    public int calPoints(String[] ops) {
        List<Integer> list=new ArrayList<>();
        
        for(int i=0;i<ops.length;i++)
        {
            if(isNum(ops[i]))
                list.add(Integer.parseInt(ops[i]));
            else if(ops[i].equals("D"))
                list.add(list.get(list.size()-1)*2);
            else if(ops[i].equals("C"))
                list.remove(list.size()-1);
            else if(ops[i].equals("+"))
                list.add(list.get(list.size()-1)+list.get(list.size()-2));
        }
        
        int sum=0;
        for(int i=0;i<list.size();i++)
            sum+=list.get(i);
        
        return sum;
    }
    
    public boolean isNum(String s)
    {
        try{
            Integer.parseInt(s);
            return true;
        }
        catch(Exception e)
        {
            return false;
        }
    }
}