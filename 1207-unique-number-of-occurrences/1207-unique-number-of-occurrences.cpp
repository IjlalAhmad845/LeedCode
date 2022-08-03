class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v1(1001,0),v2(1001,0);
        
        for(int i=0;i<arr.size();i++)
            if(arr[i]>=0)
                v1[arr[i]]++;
            else 
                v2[-arr[i]]++;
        
        set<int> st;
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=0)
            {
                if(st.find(v1[i])!=st.end())
                    return false;
                else 
                    st.insert(v1[i]);
            }
        }
        
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]!=0)
            {
                if(st.find(v2[i])!=st.end())
                    return false;
                else 
                    st.insert(v2[i]);
            }
        }
        
        return true;
    }
};