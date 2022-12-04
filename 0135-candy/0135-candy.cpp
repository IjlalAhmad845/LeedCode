class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size(), 1);  // initialize each child with one candy
    // go through the array from left to right
    for (int i = 1; i < ratings.size(); i++) {
        if (ratings[i] > ratings[i-1]) {
            candies[i] = candies[i-1] + 1;
        }
    }
    // go through the array from right to left
    for (int i = ratings.size() - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i+1]) {
            candies[i] = max(candies[i], candies[i+1] + 1);
        }
    }
    // sum the number of candies needed for each child
    int total = 0;
    for (int i = 0; i < ratings.size(); i++) {
        total += candies[i];
    }
    return total;
    }
};