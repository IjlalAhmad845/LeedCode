class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> n1,n2;
        
        for(int i=0;i<a.size();i++)
            n1.push_back(a[i]-'0');
        
        for(int i=0;i<b.size();i++)
            n2.push_back(b[i]-'0');
        
        int i=a.size()-1,j=b.size()-1,carry=0;
        vector<int> result;
        
        while(i>=0 && j>=0)
        {
            result.push_back((carry+n1[i]+n2[j])%2);
            carry = (carry+n1[i]+n2[j])/2;
            i--;
            j--;
        }
        
         while(i>=0)
        {
            result.push_back((carry+n1[i])%2);
            carry = (carry+n1[i])/2;
             i--;
        }
        
         while(j>=0)
        {
            result.push_back((carry+n2[j])%2);
            carry = (carry+n2[j])/2;
             j--;
        }
        
        if(carry>0)
            result.push_back(carry);
        
        string str="";
        
        for(int i=result.size()-1;i>=0;i--)
            str+=result[i]+'0';
        
        
        return str;
    }
};