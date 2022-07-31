class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> v(26,0);
        
        for(int i=0;i<licensePlate.size();i++)
        {
            if(licensePlate[i]>='a' && licensePlate[i]<='z')
                v[licensePlate[i]-97]++;
            
             if(licensePlate[i]>='A' && licensePlate[i]<='Z')
                v[licensePlate[i]-65]++;
        }
        
        string result="";
        
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            vector<int> temp=v;
            for(int j=0;j<words[i].size();j++)
                if(temp[words[i][j]-97]!=0)
                 temp[words[i][j]-97]--;
            
            for(int i=0;i<26;i++)
                if(temp[i]!=0)
                    flag=1;
            
            if(flag==0)
            {
                if(words[i].size()<result.size() || result=="")
                    result=words[i];
            }
        }
        
        return result;
    }
};