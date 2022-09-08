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
    int Max=INT_MIN;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        
        return Max;
    }
    
    int helper(TreeNode *root)
    {
        int left,right;
        
        if(root->left!=NULL)
            left=helper(root->left);
        else 
            left=0;
        
        if(root->right!=NULL)
            right=helper(root->right);
        else 
            right=0;
        
        if(left+right>Max)
            Max=left+right;
        
        return max(left,right)+1;
    }
};