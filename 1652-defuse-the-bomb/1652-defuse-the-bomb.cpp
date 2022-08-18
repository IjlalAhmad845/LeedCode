class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> v(n,0);
        for(int i=0;i<code.size();i++)
        {
            if(k>0)
            {
                int sum=0;
                for(int j=1;j<=k;j++)
                {
                    sum+=code[(i+j)%n];
                }
                v[i]=sum;
            }
            else if(k==0)
            {
                v[i]=0;
            }
            else
            {
                int sum=0;
                for(int j=1;j<=-k;j++)
                {
                    int index=i-j;
                    if(index<0)
                        index=n-j+i;
                    
                    sum+=code[index];
                }
                v[i]=sum;
            }
        }
        
        return v;
    }
};