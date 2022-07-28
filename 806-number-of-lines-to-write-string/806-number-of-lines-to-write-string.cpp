class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int count = 1;
        int sum = 0;
        for(int i=0;i<s.size();i++)
        {
            if(sum+widths[s[i]-97]<=100)
                sum+=widths[s[i]-97];
            else 
            {
                sum=widths[s[i]-97];
                count++;
            }
            cout<<sum<<",";
        }
        
        return {count,sum};
    }
};