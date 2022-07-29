class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int time=releaseTimes[0];
        vector<char> v;
        int max=0;
        
        for(int i=0;i<releaseTimes.size();i++)
        {
            if(i!=0)
                time=releaseTimes[i]-releaseTimes[i-1];
            
            if(time>=max)
            {
               
                if(time==max)
                    v.push_back(keysPressed[i]);
                else
                {
                    if(!v.empty())
                        v.clear();
                    v.push_back(keysPressed[i]);
                }
                
                 max=time;
            }
            
        }
        
        char ch=96;
        for(int i=0;i<v.size();i++)
        {
            if(ch<v[i])
                ch=v[i];
        }
        
        return ch;
    }
};