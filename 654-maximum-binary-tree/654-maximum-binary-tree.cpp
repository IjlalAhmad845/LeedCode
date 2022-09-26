/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums);
    }
    
    TreeNode* helper(vector<int> &nums)
    {
        if(nums.size()==0)
            return NULL;
        
        int max = *max_element(nums.begin(),nums.end());
        
        TreeNode *ptr=new TreeNode(max,NULL,NULL);
        int index = find(nums.begin(),nums.end(),max) - nums.begin();
        
        vector<int> v1;
        for(int i=0;i<index;i++)
            v1.push_back(nums[i]);
        
        vector<int> v2;
        for(int i=index+1;i<nums.size();i++)
            v2.push_back(nums[i]);
    
        
        ptr->left = helper(v1);
        ptr->right = helper(v2);
        
        return ptr;
        
    }
};