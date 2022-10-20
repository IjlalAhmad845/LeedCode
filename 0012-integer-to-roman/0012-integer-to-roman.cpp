class Solution {
public:
    string intToRoman(int num) {
        string roman[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int divier[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int n=0;
        
        string result="";
        for(int i=12;i>=0;i--)
        {
            
            if(num>3){
                for(int j=1;j<=num/divier[i];j++)
                    result+=roman[i];
                num=num-(num/divier[i])*divier[i];
           }

           else if(num>0){
               n=num;
               for(int j=1;j<=n;j++){
                result+=roman[0];
                num--;
               }   
           }
        }
        
        return result;
    }
};