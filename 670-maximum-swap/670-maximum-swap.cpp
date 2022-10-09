class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v;
        
        while(num!=0)
        {
            v.push_back(num%10);
            num/=10;
        }
        
        reverse(v.begin(),v.end());
        
        int index;
        int max;
        for(int i=0;i<v.size();i++)
        {
            max=INT_MIN;
            for(int j=i;j<v.size();j++)
            {
                if(v[j]>=max)
                {
                    max=v[j];
                    index=j;
                }
            }
            
            
            if(index==i || v[index]==v[i])
                continue;
            
            swap(v[i],v[index]);
            break;
        }
        
        int result=0;
        for(auto i:v)
        {
            result=result*10+i;
        }
        
        return result;
    }
};