class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int min=prices[0];
        int currentProfit=0;
        
        for(int i=0;i<prices.size();i++){
            if(min>prices[i])
            {
                min=prices[i];
                currentProfit=0;
            }
            else {
                if(currentProfit<prices[i]-min)
                {
                    currentProfit=prices[i]-min;
                    
                    if(currentProfit>maxProfit)
                        maxProfit=currentProfit;
                    cout<<maxProfit<<" ";
                }
            }          
        }
        
        return maxProfit;
    }
};