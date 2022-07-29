class Solution {
public:
    string reformatNumber(string number) {
        string str="";
        
        for(int i=0;i<number.size();i++)
        {
            if(number[i]>='0' && number[i]<='9')
                str+=number[i];
        }
        
        
        string result="";
        
        int itr;
        while(str.size()>4)
        {
            itr=0;
            for(int i=0;i<3;i++)
                result+=str[itr++];
            result+="-";
            
            str.erase(0,3);
        }
        
        
        
       if(str.size()==2 || str.size()==3)
            result+=str;
        else if(str.size()==4)
        { 
            result+=str;
            result.insert(result.size()-2,"-");
        }
        
        return result;
    }
};