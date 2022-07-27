class Solution {
    public String reformatDate(String date) {
        String str[]=date.split(" ");
        
        String result="";
        result+=str[2]+"-";
        result+=month(str[1])+"-";
        if(str[0].substring(0,str[0].length()-2).length()==1)
            result+="0";
        result+=str[0].substring(0,str[0].length()-2);
        
        return result;
    }
    
    public String month(String mm)
    {
        switch(mm)
        {
            case "Jan":
                return "01";
            case "Feb":
                return "02";
            case "Mar":
                return "03";
            case "Apr":
                return "04";
            case "May":
                return "05";
            case "Jun":
                return "06";
            case "Jul":
                return "07";
            case "Aug":
                return "08";
            case "Sep":
                return "09";
            case "Oct":
                return "10";
            case "Nov":
                return "11";
            case "Dec":
                return "12";
                   
        }
        
        return "";
    }
}