class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    
        int lastIndex=digits.size()-1;
        
        digits[lastIndex]=(digits[lastIndex]+1)%10;
        
        
        while(lastIndex>0 && digits[lastIndex]==0)
        {
            lastIndex--;
            digits[lastIndex]=(digits[lastIndex]+1)%10;
        }
        
        if(lastIndex==0 && digits[lastIndex]==0)
            digits.insert(digits.begin(),1);
        return digits;
    }
};