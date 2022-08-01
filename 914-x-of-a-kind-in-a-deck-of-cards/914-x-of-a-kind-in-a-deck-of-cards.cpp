class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1)
            return false;
        
        vector<int> v(10000,0);
        
        for(int i=0;i<deck.size();i++)
            v[deck[i]]++;
        
        int max=*max_element(v.begin(),v.end());
        
        int flag=0;
        for(int i=2;i<=max;i++)
            if(check(v,i))
            {   
                flag=1;
                break;
            }
        
        if(flag==0)
            return false;
        return true;
    }
    
    bool check(vector<int> v,int n)
    {

        for(int i=0;i<v.size()-1;i++)
        {    
            if(v[i]%n!=0)
                return false;
        }
        
        return true;
    }
};