class Solution {
public:
    string result="";
    string numberToWords(int num) {
        if(num==0)
            return "Zero";
        internationalsystem(num);
        
        result=result.substr(0,result.size()-1);
        return result;
    }
    
    void internationalsystem(long long num){
       if(num>=1000000000 && num<1000000000000){
            internationalsystem(num/1000000000);
            result+="Billion ";
            internationalsystem(num%1000000000);
        }
        else if(num>=1000000 && num<1000000000){
            internationalsystem(num/1000000);
            result+="Million ";
            internationalsystem(num%1000000);
        }
        else if(num>=1000 && num<1000000){
            nationalsystem(num/1000);
            result+="Thousand ";
            nationalsystem(num%1000);
        }
        else if(num<1000)nationalsystem(num);
    
    }
    
    void nationalsystem(long long num){

        if(num>=100 && num<1000){
            first20numbers(num/100);
            result+="Hundred ";
            nationalsystem(num%100);
        }
        else {//less than 100
            if(num%100>20)
            alltens(num%100);
            else
            first20numbers(num%100);
        }

    }
    
    //ten's exractor
    void alltens(long long num){
    switch((num/10)*10){//firstly converting to int then ten's eg 36->3->30
            case 20 : result+="Twenty ";break;
            case 30 : result+="Thirty ";break;
            case 40 : result+="Forty ";break;
            case 50 : result+="Fifty ";break;
            case 60 : result+="Sixty ";break;
            case 70 : result+="Seventy ";break;
            case 80 : result+="Eighty ";break;
            case 90 : result+="Ninety ";break;      
        }
        first20numbers(num%10);
    }
    
        //first 20 numbers
    void first20numbers(long long num){
        switch(num){
            // case 0 : result+="Zero ";break;
            case 1 : result+="One ";break;
            case 2 : result+="Two ";break;
            case 3 : result+="Three ";break;
            case 4 : result+="Four ";break;
            case 5 : result+="Five ";break;
            case 6 : result+="Six ";break;
            case 7 : result+="Seven ";break;
            case 8 : result+="Eight ";break;
            case 9 : result+="Nine ";break;
            case 10 : result+="Ten ";break;
            case 11 : result+="Eleven ";break;
            case 12 : result+="Twelve ";break;
            case 13 : result+="Thirteen ";break;
            case 14 : result+="Fourteen ";break;
            case 15 : result+="Fifteen ";break;
            case 16 : result+="Sixteen ";break;
            case 17 : result+="Seventeen ";break;
            case 18 : result+="Eighteen ";break;
            case 19 : result+="Nineteen ";break;
            case 20 : result+="Twenty ";break;

        }
    }
    
    void bugfix(long long num,long long divider){//11 to 19 bug fix if 2 digits is < 20
    if(num/divider>20)
        alltens(num/divider);
        else
        first20numbers(num/divider);
    }
};