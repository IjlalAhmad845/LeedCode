class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int> num2;
         while(k!=0)
        {
            num2.push_back(k%10);
            k/=10;
        }
    
        int temp=0;
        for(int i=0;i<num2.size()/2;i++)
        {
            temp = num2[i];
            num2[i] = num2[num2.size()-1-i];
            num2[num2.size()-1-i]=temp;
        }
    
        
        vector<int> result;
        
        int i=num.size()-1,j=num2.size()-1,carry=0;
        
        while(i>=0 && j>=0)
        {
            result.push_back((carry+num[i]+num2[j])%10);
            carry = (carry+num[i]+num2[j])/10;
            i--;
            j--;
        }
        
        while(i>=0)
        {
            result.push_back((carry+num[i])%10);
            carry = (carry+num[i])/10;
            i--;
        }
        
        while(j>=0)
        {
            result.push_back((carry+num2[j])%10);
            carry = (carry+num2[j])/10;
            j--;
        }
        
        if(carry>0)
            result.push_back(carry);
        
        
        
        for(int i=0;i<result.size()/2;i++)
        {
            temp = result[i];
            result[i] = result[result.size()-1-i];
            result[result.size()-1-i]=temp;
        }
        
        return result;
    }
};