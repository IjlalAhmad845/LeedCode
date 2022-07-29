class Solution {
public:
    int secondHighest(string s) {
        vector<int> v;
        
        for(int i=0;i<s.size();i++)
            if(s[i]>='0' && s[i]<='9')
                v.push_back(s[i]-'0');
        
        if(v.size()==0)
            return -1;
        
        sort(v.begin(),v.end());
        
        int temp=v[v.size()-1];
        
        for(int i=v.size()-2;i>=0;i--)
            if(temp!=v[i])
                return v[i];
        
        return -1;

    }
};