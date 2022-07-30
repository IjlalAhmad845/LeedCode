class Solution {
public:
    string largestGoodInteger(string num) {
        int max=-1;
        
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                int sum=0;
                for(int j=0;j<3;j++)
                {
                    sum=sum*10+(num[i+j]-'0');
                }

                if(max<sum)
                    max=sum;
            }
        }
        
        if(max==0)
            return "000";
        
        if(max==-1)
            return "";
        return to_string(max);
    }
};