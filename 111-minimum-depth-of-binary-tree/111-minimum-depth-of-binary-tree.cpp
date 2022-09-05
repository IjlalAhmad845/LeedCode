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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        return height(root);
    }
    
    int height(TreeNode *root)
    {
        if(root->left==NULL && root->right==NULL)
            return 1;
        
        int x,y;
        if(root->left!=NULL)
            x=height(root->left);
        else x=INT_MAX;
        
        if(root->right!=NULL)
            y=height(root->right);
        else y=INT_MAX;
        
        return 1+min(x,y);
    }
};