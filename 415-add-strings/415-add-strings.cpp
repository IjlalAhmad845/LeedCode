class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<int> n1,n2;
        
        //converting strings into arrays
        for(int i=0;i<num1.size();i++)
        {
            n1.push_back(num1[i]-'0');
        }
        
        for(int i=0;i<num2.size();i++)
        {
            n2.push_back(num2[i]-'0');
        }
    
        //main logic
        int carry=0;
        
        vector<int> result;
            
        int i=n1.size()-1,j=n2.size()-1;
        
        //adding upto smaller length array
        while(i>=0 && j>=0)
        {
            result.push_back((carry+n1[i]+n2[j])%10);
            carry = (carry+n1[i]+n2[j])/10;
            i--;
            j--;
        }

       
        while(i>=0)
        {
            result.push_back((carry+n1[i])%10);
            carry = (carry+n1[i])/10;
            i--;
        }
        
       
        while(j>=0)
        {
            result.push_back((carry+n2[j])%10);
            carry = (carry+n2[j])/10;
            j--;
        }
        
        
        if(carry>0)
            result.push_back(carry);
        
        string s;
        for(int i=result.size()-1;i>=0;i--)
        {
            s.push_back(result[i]+48);
        }
        
        return s;
    }
};