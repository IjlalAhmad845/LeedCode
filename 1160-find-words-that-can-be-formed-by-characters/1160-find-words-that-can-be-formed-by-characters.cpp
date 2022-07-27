class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       
    
        int count=0;
        
        for(int i=0;i<words.size();i++)
        {
            vector<int> v(26,0);
            for(int i=0;i<chars.size();i++)
                v[chars[i]-97]++;
            
            int flag=0;
            for(int j=0;j<words[i].size();j++)
            {
                if(v[words[i][j]-97]==0)
                {
                    flag=1;
                    break;
                }
                else 
                    v[words[i][j]-97]--;
                    
            }
            
            if(flag==0)
                count+=words[i].size();
        }
        
        return count;
    }
};