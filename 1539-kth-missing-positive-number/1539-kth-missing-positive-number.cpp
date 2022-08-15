class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> st;
        
        for(int i=0;i<arr.size();i++)
        {
            st.insert(arr[i]);
        }
        
        int counter=1;
        
        for(int i=0;i<k;i++)
        {
            if(st.find(counter)!=st.end())
            {
                i--;
            }
            
            counter++;
        }
        
        return counter-1;
    }
};