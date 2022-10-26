class Solution {

public:
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        map<int,string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        
        return helper(digits,0,m);
    }

    vector<string> helper(string digits,int i,map<int,string>&m)
    {
        if(i==digits.size())
        {
            return {""};
        }
        
        vector<string> temp=helper(digits,i+1,m);
        vector<string> result;
        for(auto x:m[digits[i]-'0'])
        {
            for(auto j:temp)
            {
                result.push_back(x+j);
            }
        }
        
        return result;
    }
};