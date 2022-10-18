class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=0;
        vector<int> v(cost.size(),-1);
        return min(helper(0,cost,v),helper(1,cost,v));
    }
    
    int helper(int i,vector<int>& cost,vector<int>& v){
        if(i>=cost.size())
            return 0;
        else if(v[i]!=-1)
            return v[i];
            
        int value=0;
        value+=cost[i]+min(helper(i+1,cost,v),helper(i+2,cost,v));
        v[i]=value;
        
        return value;
    }
};