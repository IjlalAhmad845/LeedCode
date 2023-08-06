class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0,j=0;i<s.size();i+=2*k,j+=2*k)
        {
            if(k<=s.size()-j)
                reverse(s.begin()+i,s.begin()+i+k);
            else
                reverse(s.begin()+i,s.end());
        }
        
        return s;
    }
};