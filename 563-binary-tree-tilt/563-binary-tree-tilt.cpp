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
    int sum=0;
public:
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        helper(root);
        return sum;
    }
    
    int helper(TreeNode *root)
    {
        int left,right;
        
        if(root->left!=NULL)
            left=helper(root->left);
        else left=0;
        
        if(root->right!=NULL)
            right=helper(root->right);
        else right=0;
        
        sum+=abs(left-right);
        return left+right+root->val;
     
    }
};