class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        return binary_search(nums.begin(),nums.end(),target);
    }
};