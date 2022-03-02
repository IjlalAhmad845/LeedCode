class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n=candies.size();
        
        vector<bool> result;
        
        for(int i=0;i<n;i++)          
            result.push_back(candies[i]+extraCandies >= *max_element(candies.begin(),candies.end()));
        
        
        return result;
    }
};