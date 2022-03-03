class Solution {
public:
    int addDigits(int num) {
        
        
        int result = 0;
        
        while(num>=10)
        {
            result=0;
            while(num!=0)
            {
                result+=num%10;
                num/=10;
            }
            
            num=result;
        }
        
        if(result==0)
            return num;
        
        return result;
    }
};