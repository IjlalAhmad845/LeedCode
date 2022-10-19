class Solution {
public:
        static bool comp(pair<string,int> &p1,pair<string,int> &p2)
        {
            if(p1.second==p2.second)
                return p1.first < p2.first;
            else
                return p1.second > p2.second;
        }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        
        for(int i=0;i<words.size();i++)
        {
            if(m.find(words[i])!=m.end())
                m[words[i]]++;
            else 
                m[words[i]]=1;
        }
        
        
        vector<pair<string,int>> temp;
        
        for(auto i:m)
        {
            temp.push_back(i);
        }
        
        sort(temp.begin(),temp.end(),comp);
        
        
        vector<string> v;
        
        for(int i=0;i<temp.size();i++)
        {
            if(k==0)
                break;
            
            v.push_back(temp[i].first);
            k--;
        }
        
        return v;
    }
    
   
};