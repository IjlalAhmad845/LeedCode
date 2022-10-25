class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int minWord=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            minWord=min(minWord,(int)strs[i].size());
        }
        
        
        string result="";
        for(int i=0;i<minWord;i++)
        {
            int flag=0;
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                    flag=1;
            }
            
            if(flag==0)
                result+=strs[0][i];
            else 
                break;
        }
        
        return result;
    }
};