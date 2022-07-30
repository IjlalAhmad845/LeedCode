class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size()>k)
        {
            int grps=s.size()/k;
            int rem=s.size()%k;

            vector<string> v;

            int itr=0;
            string temp="";
            for(int i=0;i<grps;i++)
            {
                temp="";
                for(int j=0;j<k;j++)
                {
                    temp+=s[itr++];
                }
                v.push_back(temp);
            }

            if(rem!=0)
            {
                temp="";
                for(int i=0;i<rem;i++)
                    temp+=s[itr++];

                v.push_back(temp);
            }
            
            
            string str="";
            for(int i=0;i<v.size();i++)
            {
                int sum=0;
                for(int j=0;j<v[i].size();j++)
                   sum+=v[i][j]-'0';
                
                str+=to_string(sum);
            }
            
            s=str;
        
        }
        return s;
    }
};