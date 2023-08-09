class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper(result,"",0,0,n);
        
        return result;
    }
    
    void helper(vector<string> &v,string current,
                int open,int close,int n){
        
        if(open==n and close==n)
        {
            v.push_back(current);
            return;
        }
        
        if(open<=n)
        {
            helper(v,current+"(",open+1,close,n);
        }
        
        if(close<open)
        {
            helper(v,current+")",open,close+1,n);
        }
        
        return;
    }
};