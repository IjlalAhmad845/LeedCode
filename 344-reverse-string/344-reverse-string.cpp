class Solution {
public:
    void reverseString(vector<char>& s) {
        
        char temp;
        int l=s.size();
        for(int i=0;i<l/2;i++)
        {
            temp=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=temp;
        }
    }
};