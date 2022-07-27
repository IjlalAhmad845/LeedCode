class Solution {
    public int dayOfYear(String date) {
        String dt[]=date.split("-");
        int dd=Integer.parseInt(dt[2]);
        int mm=Integer.parseInt(dt[1]);
        int yy=Integer.parseInt(dt[0]);
        
        int count=0;
        for(int i=1;i<mm;i++)
            count+=month(i,yy);
    
        return count+dd;
    }
    
    public int month(int mm,int yy)
    {
        switch(mm)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            case 2:
                if(yy%4==0)
                {
                    if(yy%100==0)
                    {
                        if(yy%400==0)
                            return 29;
                        else return 28;
                    }
                    else 
                        return 29;
                }
                else return 28;
        }
        return 0;
    }
}